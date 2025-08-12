//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#ifdef NDEBUG
#undef NDEBUG
#endif

#include <imgui.h>
#include <imgui-SFML.h>
#include "../deps/portable-file-dialogs/portable-file-dialogs.h"
#include "mainfunc/mainfunc.h"
#include "mainfunc/Logger.h"
#include "mainfunc/FileTree/Editor.h"
#include <git2.h>
//#include "mainfunc/c_Parser.h"
#include "mainfunc/f_MainMenu.h"
#include "../deps/ImGuiColorTextEdit/TextEditor.h"
#include "mainfunc/searchParser/s_Parser.h"

#include <fstream>
#include <memory>
#include <stdexcept>
#include <iostream>
#include <string>
#include <sstream>
#include <array>
#include <SFML/Graphics.hpp>

using namespace std;

// Utility function to load a file's content into the TextEditor
void loadFileIntoEditor(const std::string& filePath, TextEditor& editor)
{
    std::ifstream file(filePath);
    if (file.is_open())
    {
        std::stringstream buffer;
        buffer << file.rdbuf();
        editor.SetText(buffer.str());
    }
}

// Function to execute a system command and capture its output
std::string exec(const char* cmd)
{
    std::array<char, 128> buffer{};
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe)
    {
        throw std::runtime_error("_popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
    {
        result += buffer.data();
    }
    return result;
}

// Function to check if a package exists in the fpm.toml file
bool isPackageInFpmToml(const std::string& packageName)
{
    std::ifstream infile("fpm.toml");
    std::string line;
    while (std::getline(infile, line))
    {
        if (line.find(packageName) != std::string::npos)
        {
            return true;
        }
    }
    return false;
}

// Function to install a package using fpm
void installPackage(const std::string& toml)
{
    std::string command = "fpm run -- demo substitute fpm.toml";
    try
    {
        exec(command.c_str());
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error executing command: " << e.what() << std::endl;
    }
    std::cout << "Installed package: " << toml << std::endl;
}

// In your main rendering loop where you draw the UI
/*
void DrawMainInterface(std::shared_ptr<BuildLogWidget> buildLogWidget) {
    // Create a full-width tab bar at the bottom
    ImGui::SetNextWindowSize(ImVec2(-1, 400), ImGuiCond_Always);
    ImGui::SetNextWindowPos(ImVec2(0, ImGui::GetIO().DisplaySize.y - 400), ImGuiCond_Always);
    
    if (ImGui::Begin("BottomPanel", nullptr, 
        ImGuiWindowFlags_NoTitleBar | 
        ImGuiWindowFlags_NoMove |
        ImGuiWindowFlags_NoCollapse))
    {
        if (ImGui::BeginTabBar("MainTabBar"))
        {
            // Build Output Tab
            if (ImGui::BeginTabItem("Build Output")) 
            {
                buildLogWidget->Draw();
                ImGui::EndTabItem();
            }
            // Terminal Tab
            if (ImGui::BeginTabItem("Terminal"))
            {
                // Add your terminal content here
                ImGui::Text("Terminal content...");
                ImGui::EndTabItem();
            }

            // Problems Tab
            if (ImGui::BeginTabItem("Problems"))
            {
                // Add problems/errors list
                ImGui::Text("No problems detected");
                ImGui::EndTabItem();
            }

            ImGui::EndTabBar();
        }
    }
    ImGui::End();
}*/

int main()
{
    f_MainMenu::entryPoint();
    ImGui::CreateContext();
    //ImGui::SetCurrentContext();
    // Run the `fpm search` command and capture its output
    std::string fpmOutput;
    try
    {
        fpmOutput = exec("fpm search --verbose");
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error executing command: " << e.what() << std::endl;
        return 1;
    }

    // Parse the output and convert to XML
    auto packages = parseFpmSearchOutput(fpmOutput);
    std::string xml = convertToXML(packages);

    // Write the XML to a file
    std::ofstream outFile("packages.xml");
    if (outFile.is_open())
    {
        outFile << xml;
        outFile.close();
    }
    else
    {
        std::cerr << "Unable to open file for writing\n";
    }

    // Load packages from the XML file
    packages = loadPackagesFromXML("packages.xml");

    sf::VideoMode desktopSize = sf::VideoMode::getDesktopMode();

    //IM_ASSERT(false); // Test if assertions are enabled and functioning.
    sf::RenderWindow window(desktopSize, "FortIDE");
    ImGui::SFML::Init(window);
    window.setVerticalSyncEnabled(true); // Enable vertical sync
     // 1. Create build log widget
    auto build_log_widget = std::make_shared<BuildLogWidget>();
    
    // 2. Create the sink from the widget
    auto sink = build_log_widget->create_sink();

    // 3. Logger initialization code HERE
    std::shared_ptr<spdlog::logger> logger;
    try {
        std::vector<spdlog::sink_ptr> sinks {sink};
        
        if (auto existing = spdlog::get("build_logger")) {
            logger = existing;
            logger->sinks().push_back(sink);
        } else {
            logger = std::make_shared<spdlog::logger>("build_logger", sinks.begin(), sinks.end());
            spdlog::register_logger(logger);
        }
        logger->set_pattern("[%T] [%l] %v");
    } catch (const spdlog::spdlog_ex& ex) {
        std::cerr << "Logger initialization failed: " << ex.what() << std::endl;
        return EXIT_FAILURE;
    }
    /*if (!io.Fonts->AddFontFromFileTTF("C:\\Users\\Peyton\\Downloads\\Open_Sans\\OpenSans-VariableFont_wdth,wght.ttf", 8.0f)) {
        printf("Failed to load font1.ttf\n");
    }*/
    //ImGui::CreateContext();  // Call this early in your application.

    TextEditor editor; // Create a TextEditor instance

    sf::Clock deltaClock;
    git_libgit2_init();
    while (window.isOpen())
    {
        while (const std::optional<sf::Event> event = window.pollEvent())
        {
            ImGui::SFML::ProcessEvent(window, *event);

            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
        ImGui::SFML::Update(window, deltaClock.restart());
        //ImGui::NewFrame();
        //f_MainMenu::entryPoint();
        //f_MainMenu::startMenu();
        //ImGui::EndFrame();
        
        ImVec2 fixedWidgetPosition = ImVec2(800, 30); // Fixed position for the widget
        ImVec2 sizedWidget = ImVec2(570, 450);

        //ImGui::NewFrame();
        ImGui::SetNextWindowPos(fixedWidgetPosition);
        ImGui::SetNextWindowSize(sizedWidget);
        ImGui::Begin("Package Installer");
        for (const auto& pkg : packages)
        {
            ImGui::Text("Version: %s", pkg.version.c_str());
            ImGui::TextWrapped("Description: %s", pkg.description.c_str());
            ImGui::Text("License: %s", pkg.license.c_str());
            ImGui::Text("Author: %s", pkg.author.c_str());
            ImGui::Text("Toml: %s", pkg.toml.c_str());
            ImGui::Separator();
        }
        ImGui::End();
        //ImGui::EndFrame();
        
        multiPurp mainbar;
        Editor::RenderEditor();
        mainbar.menuBarfunc(editor);

        build_log_widget->Draw();
        //DrawMainInterface(build_log_widget);



        window.clear();
        ImGui::SFML::Render(window);
        window.display();
        //deltaClock.restart(); // Restart clock for next frame
        git_libgit2_shutdown();
    }

    ImGui::SFML::Shutdown();
    return 0;
}
