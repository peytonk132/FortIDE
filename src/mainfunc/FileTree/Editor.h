#pragma once
#include "../../../deps/ImGuiColorTextEdit/TextEditor.h"
#include "FileTree.h"
#include <boost/filesystem.hpp>
#include <fstream>
#include <imgui-SFML.h>
#include <imgui.h>
#include <sstream>
#include <vector>

namespace fs = boost::filesystem;

class Editor {
public:
    struct EditorTab {
        TextEditor editor;
        std::string filePath;
        bool isUnsaved = false;
        std::string displayName;
        std::string savedText;

        EditorTab() = default;

        EditorTab(const std::string &path) : filePath(path) {
            if (!filePath.empty()) {
                displayName = fs::path(filePath).filename().string();
                std::ifstream file(filePath);
                if (file.is_open()) {
                    std::stringstream buffer;
                    buffer << file.rdbuf();
                    savedText = buffer.str();
                    editor.SetText(savedText);
                }
            } else {
                displayName = "Untitled";
                savedText = "";
                isUnsaved = true;
            }
        }
    };

    static int RenderEditor();
    static void OpenFileInTab(const std::string &filePath);
    static void SaveCurrentTab();

private:
    static std::vector<EditorTab> tabs;
    static int currentTab;
    static void HandleShortcuts();
};
