#include "Editor.h"

int Editor::RenderEditor(TextEditor& editor)
{
    FileTree::setFileClickCallback([&editor](const std::string& filePath)
        {
            Editor::loadFileIntoEditor(filePath, editor);
        });
    static bool isLanguageSet = false;
    if (!isLanguageSet)
    {
        // Optionally, you can load these arrays from a file or database
        // instead of hardcoding them here.
        
        editor.SetLanguageDefinition(TextEditor::LanguageDefinitionId::Cpp);

        isLanguageSet = true;
    }

    FileTree::treeNode();

    ImVec2 fixedWidgetPosition = ImVec2(0, 30); // Set your desired fixed position here
    ImVec2 sizedWidget = ImVec2(400, 450); // Adjust size according to your preference

    ImGui::SetNextWindowPos(fixedWidgetPosition, ImGuiCond_Always);
    ImGui::SetNextWindowSize(sizedWidget, ImGuiCond_Always);

    if (ImGui::Begin("Text Editor", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize))
    {
        // Render the editor
        editor.Render("Text Editor");
        // Detect and highlight errors

        //c_Parser parse;
        //parse.parseCode(editor);
        ImGui::End();
    }

    return 0;
}

/*
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
*/

int Editor::loadFileIntoEditor(const std::string& filePath, TextEditor& editor)
{
    std::ifstream file(filePath);
    if (file.is_open())
    {
        std::stringstream buffer;
        buffer << file.rdbuf();
        editor.SetText(buffer.str());
    }
}

