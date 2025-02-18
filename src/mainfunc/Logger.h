#include <vector>
#include <mutex>
#include <chrono>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/base_sink.h>
#include <spdlog/common.h>
#include <imgui.h>

enum class LogLevel {
    Trace,
    Debug,
    Info,
    Warn,
    Error,
    Critical
};

struct LogLine {
    std::chrono::system_clock::time_point time;
    LogLevel level;
    std::string message;
};

class BuildLogWidget {
public:
    BuildLogWidget() {
        m_levels = {
            {LogLevel::Trace, true},
            {LogLevel::Debug, true},
            {LogLevel::Info, true},
            {LogLevel::Warn, true},
            {LogLevel::Error, true},
            {LogLevel::Critical, true}
        };
    }

    template<typename Mutex>
    class Sink : public spdlog::sinks::base_sink<Mutex> {
    public:
        Sink(BuildLogWidget* widget) : m_widget(widget) {}

    protected:
        void sink_it_(const spdlog::details::log_msg& msg) override {
            spdlog::memory_buf_t formatted;
            spdlog::sinks::base_sink<Mutex>::formatter_->format(msg, formatted);
            
            LogLine line;
            line.time = msg.time;
            line.level = static_cast<LogLevel>(msg.level);
            line.message = fmt::to_string(formatted);
            
            m_widget->AddLog(line);
        }

    void flush_() override {}

    private:
        BuildLogWidget* m_widget;
    };

    std::shared_ptr<spdlog::sinks::base_sink<std::mutex>> create_sink() {
        return std::make_shared<Sink<std::mutex>>(this);
    }

    void AddLog(const LogLine& log) {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_logs.push_back(log);
    }

    void Draw() 
    {
        if(ImGui::Begin("Bottom Panel", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse))
        {
            if(ImGui::BeginTabBar("MainTabBar"))
            {
                if(ImGui::BeginTabItem("Build Output"))
                {
                        // Controls
                        if (ImGui::Button("Clear")) 
                        {
                            std::lock_guard<std::mutex> lock(m_mutex);
                            m_logs.clear();
                        }
                
                        ImGui::SameLine();
                        ImGui::Separator();
                        ImGui::SameLine();
                
                        for (auto& [level, enabled] : m_levels) {
                            ImGui::Checkbox(LevelToString(level), &enabled);
                            ImGui::SameLine();
                        }
                
                        ImGui::NewLine();
                
                        // Log display
                        ImGui::BeginChild("Scrolling");
                
                        std::vector<LogLine> logs_copy;
                        {
                            std::lock_guard<std::mutex> lock(m_mutex);
                            logs_copy = m_logs;
                        }
    
                        ImGuiListClipper clipper;
                        clipper.Begin(static_cast<int>(logs_copy.size()));
                
                        while (clipper.Step()) {
                            for (int i = clipper.DisplayStart; i < clipper.DisplayEnd; i++) {
                                const auto& log = logs_copy[i];
                                if (!m_levels[log.level]) continue;
    
                                // Time
                                auto tm = std::chrono::system_clock::to_time_t(log.time);
                                ImGui::TextUnformatted(std::ctime(&tm));
    
                                // Level
                                ImGui::SameLine();
                                ImGui::PushStyleColor(ImGuiCol_Text, GetLevelColor(log.level));
                                ImGui::TextUnformatted(LevelToString(log.level));
                                ImGui::PopStyleColor();
    
                                // Message
                                ImGui::SameLine();
                                ImGui::TextUnformatted(log.message.c_str());
                            }
                        }
                
                        // Auto-scroll
                        if (ImGui::GetScrollY() >= ImGui::GetScrollMaxY()) {
                            ImGui::SetScrollHereY(1.0f);
                        }
    
                        ImGui::EndChild();
                    ImGui::EndTabItem();
                }
                ImGui::EndTabBar();
            }
            ImGui::End();
        }
    }

private:
    std::vector<LogLine> m_logs;
    std::mutex m_mutex;
    std::unordered_map<LogLevel, bool> m_levels;

    const char* LevelToString(LogLevel level) {
        switch (level) {
            case LogLevel::Trace: return "Trace";
            case LogLevel::Debug: return "Debug";
            case LogLevel::Info: return "Info";
            case LogLevel::Warn: return "Warn";
            case LogLevel::Error: return "Error";
            case LogLevel::Critical: return "Critical";
            default: return "Unknown";
        }
    }

    ImVec4 GetLevelColor(LogLevel level) {
        switch (level) {
            case LogLevel::Trace: return ImVec4(0.5f, 0.5f, 0.5f, 1.0f);
            case LogLevel::Debug: return ImVec4(0.2f, 0.6f, 1.0f, 1.0f);
            case LogLevel::Info: return ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
            case LogLevel::Warn: return ImVec4(1.0f, 1.0f, 0.0f, 1.0f);
            case LogLevel::Error: return ImVec4(1.0f, 0.4f, 0.4f, 1.0f);
            case LogLevel::Critical: return ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
            default: return ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
        }
    }
};
