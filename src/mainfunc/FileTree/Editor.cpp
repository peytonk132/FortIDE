#include "Editor.h"
#include <fstream>
#include <sstream>

std::vector<Editor::EditorTab> Editor::tabs;
int Editor::currentTab = -1;

int Editor::RenderEditor() {
    FileTree::setFileClickCallback([](const std::string& filePath) {
        Editor::OpenFileInTab(filePath);
    });

    FileTree::treeNode();

    ImVec2 fixedWidgetPosition = ImVec2(0, 30);
    ImVec2 sizedWidget = ImVec2(400, 450);

    ImGui::SetNextWindowPos(fixedWidgetPosition, ImGuiCond_Always);
    ImGui::SetNextWindowSize(sizedWidget, ImGuiCond_Always);

    if (ImGui::Begin("Text Editor", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize)) {
        HandleShortcuts();

        if (ImGui::BeginTabBar("##Tabs", ImGuiTabBarFlags_AutoSelectNewTabs | ImGuiTabBarFlags_Reorderable)) {
            for (int i = 0; i < tabs.size(); ++i) {
                EditorTab& tab = tabs[i];
                std::string tabLabel = tab.displayName + (tab.isUnsaved ? " *" : "");

                ImGuiTabItemFlags flags = ImGuiTabItemFlags_None;
                bool tabOpen = true;
                if (ImGui::BeginTabItem(tabLabel.c_str(), &tabOpen, flags)) {
                    currentTab = i;
                    tab.editor.Render("TextEditor");

                    // Update unsaved state
                    std::string currentText = tab.editor.GetText();
                    tab.isUnsaved = (currentText != tab.savedText);

                    ImGui::EndTabItem();
                }

                if (!tabOpen) {
                    tabs.erase(tabs.begin() + i);
                    if (currentTab >= i) currentTab--;
                    i--;
                }
            }
            ImGui::EndTabBar();
        }
        ImGui::End();
    }

    return 0;
}

void Editor::OpenFileInTab(const std::string& filePath) {
    for (int i = 0; i < tabs.size(); ++i) {
        if (tabs[i].filePath == filePath) {
            currentTab = i;
            return;
        }
    }

    EditorTab newTab(filePath);
    newTab.editor.SetLanguageDefinition(TextEditor::LanguageDefinitionId::Fortran);
    tabs.push_back(newTab);
    currentTab = tabs.size() - 1;
}

void Editor::SaveCurrentTab() {
    if (currentTab < 0 || currentTab >= tabs.size()) return;

    EditorTab& tab = tabs[currentTab];
    if (tab.filePath.empty()) {

        return;
    }

    std::string currentText = tab.editor.GetText();
    std::ofstream file(tab.filePath);
    if (file.is_open()) {
        file << currentText;
        tab.savedText = currentText; // Update saved state
        tab.isUnsaved = false;
        tab.displayName = fs::path(tab.filePath).filename().string();
    }
}

void Editor::HandleShortcuts() {
    ImGuiIO& io = ImGui::GetIO();
    if (io.KeyCtrl && ImGui::IsKeyPressed(ImGuiKey_S)) {
        SaveCurrentTab();
    }
}