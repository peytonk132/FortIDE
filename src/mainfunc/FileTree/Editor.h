#pragma once
#include <TextEditor.h>
#include <imgui-SFML.h>
#include "FileTree.h"
#include <imgui.h>
#include <fstream>

class Editor
{
public: 
    static int RenderEditor(TextEditor& editor);
    static int loadFileIntoEditor(const std::string& filePath, TextEditor& editor);
};
