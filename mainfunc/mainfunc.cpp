#include "mainfunc.h"
#include "boost/process.hpp"
#include "../colorText/TextEditor.h"
#include "FileTree/FileTree.h"
#include <cstdlib>
#include <string>
#include <windows.h>
#include <fstream>
#include <iostream>
#include <memory>
#include <nlohmann/json.hpp>
#include <vector>

using namespace std;
namespace bp = boost::process;
namespace fs = boost::filesystem;
using json = nlohmann::json;

int compileRes;
ostringstream oss;
ostringstream setStr;
FileTree fileObj;

char multiPurp::buf[2048]{ '\0' };
char multiPurp::ftcbuf[256]{ '\0' };
char multiPurp::buildDir[256]{ '\0' };
char multiPurp::exeName[256]{ '\0' };

std::unique_ptr<std::istream> fileContent; // Unique pointer to hold the file content


void detectFortranErrors(TextEditor& editor, const char* keywords[], const char* intrinsicFunctions[])
{
    const char* fortran_keywords[] =
    {
    "program", "end", "subroutine", "function", "if", "else", "then", "do", "while",
    "call", "return", "write", "read", "integer", "real", "complex", "double",
    "precision", "logical", "character", "dimension", "allocate", "deallocate",
    "implicit", "none", "external", "intrinsic", "save", "data", "common",
    "block", "structure", "union", "record", "pointer", "target", "equivalence",
    "namelist", "parameter", "intent", "optional", "public", "private", "protected",
    "module", "contains", "interface", "abstract", "extends", "procedure", "pure",
    "elemental", "recursive", "result", "bind", "generic", "select", "case", "associate",
    "class", "associate", "block", "enum", "type", "use", "import",
    "PROGRAM", "END", "SUBROUTINE", "FUNCTION", "IF", "ELSE", "THEN", "DO", "WHILE",
    "CALL", "RETURN", "WRITE", "READ", "INTEGER", "REAL", "COMPLEX", "DOUBLE", "PRECISION",
    "LOGICAL", "CHARACTER", "DIMENSION", "ALLOCATE", "DEALLOCATE", "IMPLICIT", "NONE",
    "EXTERNAL", "INTRINSIC", "SAVE", "DATA", "COMMON", "BLOCK", "STRUCTURE", "UNION",
    "RECORD", "POINTER", "TARGET", "EQUIVALENCE", "NAMELIST", "PARAMETER", "INTENT",
    "OPTIONAL", "PUBLIC", "PRIVATE", "PROTECTED", "MODULE", "CONTAINS", "INTERFACE",
    "ABSTRACT", "EXTENDS", "PROCEDURE", "PURE", "ELEMENTAL", "RECURSIVE", "RESULT", "BIND",
    "GENERIC", "SELECT", "CASE", "ASSOCIATE", "CLASS", "ASSOCIATE", "BLOCK", "ENUM", "TYPE",
    "USE", "IMPORT"
    };

    const char* fortran_intrinsics[] =
    {
    "sin", "cos", "tan", "sqrt", "print", "read", "write", "allocatable", "allocate", "assign",
    "assignment", "block", "data", "call", "case", "character", "common", "complex",
    "contains", "continue", "cycle", "data", "deallocate", "default", "do", "double",
    "precision", "else", "else", "if", "elsewhere", "end", "block", "data", "end",
    "do", "end", "function", "end", "if", "end", "interface", "end", "module",
    "end", "program", "end", "select", "end", "subroutine", "end", "type",
    "end", "where", "entry", "equivalence", "exit", "external", "function", "go",
    "to", "if", "implicit", "in", "inout", "integer", "intent", "interface",
    "intrinsic", "kind", "len", "logical", "module", "namelist", "nullify", "only",
    "operator", "optional", "out", "parameter", "pause", "pointer", "private",
    "program", "public", "real", "recursive", "result", "return", "save", "select",
    "case", "stop", "subroutine", "target", "then", "type", "type()", "use",
    "Where", "While"
    };



    auto lines = editor.GetTextLines();
    TextEditor::ErrorMarkers markers;

    std::vector<int> parenthesisStack;
    std::vector<int> printStack;
    bool insideString = false;
    size_t stringStartLine = 0;



    for (size_t line_num = 0; line_num < lines.size(); ++line_num)
    {
        const auto& line = lines[line_num];
        std::istringstream iss(line);
        std::string token;

        for (size_t i = 0; i < line.size(); ++i)
        {
            char ch = line[i];

            if (ch == '"')
            {
                if (!insideString)
                {
                    insideString = true;
                    stringStartLine = line_num;
                }
                else
                {
                    insideString = false;
                }
            }

            if (!insideString)
            {
                if (ch == '(')
                {
                    parenthesisStack.push_back(line_num + 1);
                }
                else if (ch == ')')
                {
                    if (parenthesisStack.empty())
                    {
                        markers.insert({ line_num + 1, "Unexpected closing parenthesis" });
                    }
                    else
                    {
                        parenthesisStack.pop_back();
                    }
                }
            }
        }

        while (iss >> token)
        {
            bool isKeyword = false;
            bool isIntrinsic = false;

            // Check if token is a keyword
            for (const char* kw : fortran_keywords)
            {
                if (token == kw)
                {
                    isKeyword = true;
                    break;
                }
            }

            // Check if token is an intrinsic function
            for (const char* intr : fortran_intrinsics)
            {
                if (token == intr)
                {
                    isIntrinsic = true;
                    break;
                }
            }
        }

        // Check for an unclosed string at the end of the line
        if (insideString && line_num == lines.size() - 1)
        {
            markers.insert({ stringStartLine + 1, "Unclosed string literal" });
        }
    }

    while (!parenthesisStack.empty())
    {
        markers.insert({ parenthesisStack.back(), "Unclosed opening parenthesis" });
        parenthesisStack.pop_back();
    }

    editor.SetErrorMarkers(markers);
}
// Highlighting is done by ImGuiColorTextEdit. The repo: https://github.com/BalazsJako/ImGuiColorTextEdit
void multiPurp::mainEditor(TextEditor& editor)
{
    static bool isLanguageSet = false;
    static const char* fortran_keywords[] =
    {
        "program", "end", "subroutine", "function", "if", "else", "then", "do", "while",
        "call", "return", "write", "read", "integer", "real", "complex", "double",
        "precision", "logical", "character", "dimension", "allocate", "deallocate",
        "implicit", "none", "external", "intrinsic", "save", "data", "common",
        "block", "structure", "union", "record", "pointer", "target", "equivalence",
        "namelist", "parameter", "intent", "optional", "public", "private", "protected",
        "module", "contains", "interface", "abstract", "extends", "procedure", "pure",
        "elemental", "recursive", "result", "bind", "generic", "select", "case", "associate",
        "class", "associate", "block", "enum", "type", "use", "import",
        "PROGRAM", "END", "SUBROUTINE", "FUNCTION", "IF", "ELSE", "THEN", "DO", "WHILE",
        "CALL", "RETURN", "WRITE", "READ", "INTEGER", "REAL", "COMPLEX", "DOUBLE", "PRECISION",
        "LOGICAL", "CHARACTER", "DIMENSION", "ALLOCATE", "DEALLOCATE", "IMPLICIT", "NONE",
        "EXTERNAL", "INTRINSIC", "SAVE", "DATA", "COMMON", "BLOCK", "STRUCTURE", "UNION",
        "RECORD", "POINTER", "TARGET", "EQUIVALENCE", "NAMELIST", "PARAMETER", "INTENT",
        "OPTIONAL", "PUBLIC", "PRIVATE", "PROTECTED", "MODULE", "CONTAINS", "INTERFACE",
        "ABSTRACT", "EXTENDS", "PROCEDURE", "PURE", "ELEMENTAL", "RECURSIVE", "RESULT", "BIND",
        "GENERIC", "SELECT", "CASE", "ASSOCIATE", "CLASS", "ASSOCIATE", "BLOCK", "ENUM", "TYPE",
        "USE", "IMPORT"
    };
    static const char* fortran_intrinsics[] =
    {
        "sin", "cos", "tan", "sqrt", "print", "read", "write", "allocatable", "allocate", "assign",
        "assignment", "block", "data", "call", "case", "character", "common", "complex",
        "contains", "continue", "cycle", "data", "deallocate", "default", "do", "double",
        "precision", "else", "else", "if", "elsewhere", "end", "block", "data", "end",
        "do", "end", "function", "end", "if", "end", "interface", "end", "module",
        "end", "program", "end", "select", "end", "subroutine", "end", "type",
        "end", "where", "entry", "equivalence", "exit", "external", "function", "go",
        "to", "if", "implicit", "in", "inout", "integer", "intent", "interface",
        "intrinsic", "kind", "len", "logical", "module", "namelist", "nullify", "only",
        "operator", "optional", "out", "parameter", "pause", "pointer", "private",
        "program", "public", "real", "recursive", "result", "return", "save", "select",
        "case", "stop", "subroutine", "target", "then", "type", "type()", "use",
        "Where", "While"
    };

    if (!isLanguageSet)
    {
        // Optionally, you can load these arrays from a file or database
        // instead of hardcoding them here.
        auto lang = TextEditor::LanguageDefinition::Fortran();
        editor.SetLanguageDefinition(lang);
        isLanguageSet = true;
    }

    ImVec2 fixedWidgetPosition = ImVec2(0, 30); // Set your desired fixed position here
    ImVec2 sizedWidget = ImVec2(400, 450); // Adjust size according to your preference

    ImGui::SetNextWindowPos(fixedWidgetPosition, ImGuiCond_Always);
    ImGui::SetNextWindowSize(sizedWidget, ImGuiCond_Always);

    if (ImGui::Begin("Text Editor", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize))
    {
        // Render the editor
        editor.Render("Text Editor");

        // Detect and highlight errors

        detectFortranErrors(editor, fortran_keywords, fortran_intrinsics);

        ImGui::End();
    }
}


void multiPurp::loadFont()
{
    ImGuiIO& io = ImGui::GetIO();
    io.Fonts->AddFontFromFileTTF("Fonts/toms-new-roman.tom.ttf", 18.0f);
    unsigned char* tex_pixels = nullptr;
    int tex_width, tex_height;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_width, &tex_height);
    fontText.create(tex_width, tex_height);
    fontText.update(tex_pixels);
    io.Fonts->TexID = (void*)(intptr_t)fontText.getNativeHandle();
    io.Fonts->ClearTexData();
}

int multiPurp::menuBarfunc(TextEditor& editor)
{
    if (ImGui::BeginMainMenuBar())
    {
        static bool showPopup = false;
        static bool saveDialog = false;
        //if (ImGui::IsKeyPressed(ImGuiKey_LeftCtrl) || ImGui::IsKeyPressed(ImGuiKey_RightCtrl) && ImGui::IsKeyPressed(ImGuiKey_S))
        //{
          //  saveDialog = true; // Set flag to open the file dialog
        //}

        // Save button functionality

        if (ImGui::Button("Save"))
        {
            saveDialog = true;
            if (saveDialog)
            {
                nfdchar_t* savePathBuf = NULL;
                nfdresult_t result = NFD_SaveDialog(NULL, NULL, &savePathBuf);

                if (result == NFD_OKAY)
                {
                    std::string filePathWithExtension(savePathBuf);

                    std::ofstream file(filePathWithExtension);

                    if (file.is_open())
                    {
                        file << editor.GetText(); // Save the content of the editor
                        file.close();
                    }
                    free(savePathBuf); // Free the memory allocated by NFD_SaveDialog
                }
                saveDialog = false;
            }
        }
        

        

        if (showPopup) {
            ImGui::OpenPopup("Popup");
            showPopup = false;
        }

        if (ImGui::Button("New File"))
        {
            ImGui::OpenPopup("New File Popup");
        }

        if (ImGui::BeginPopupModal("New File Popup"))
        {

            ImGui::Text("Enter filename:");
            ImGui::InputText(".f90", buf, sizeof(buf));

            if (ImGui::IsKeyPressed(ImGuiKey_Enter)) {
                
                nfdchar_t* newFileBuf = NULL;
                nfdresult_t result = NFD_PickFolder(NULL, &newFileBuf);

                if (result == NFD_OKAY)
                {
                    string newFile = buf;
                    std::ofstream file(newFile + ".f90");
                }


				ImGui::CloseCurrentPopup();
			}
            if (ImGui::Button("Close"))
            {
                ImGui::CloseCurrentPopup();
            }

            ImGui::EndPopup();
        }


        multiPurp::Compilefunc();
        ImGui::EndMainMenuBar();
    }

        auto cpos = editor.GetCursorPosition();
        ImGui::Text("%6d/%-6d %6d lines  | %s | %s | %s | %s",
            cpos.mLine + 1, cpos.mColumn + 1, editor.GetTotalLines(),
            editor.IsOverwrite() ? "Ovr" : "Ins",
            editor.CanUndo() ? "*" : " ",
            editor.GetLanguageDefinition().mName.c_str(), NULL);

    
        return 0;
}



void multiPurp::Compilefunc()
{
    if (ImGui::Button("Build Options"))
    {
        ImGui::OpenPopup("Build Options");
    }
    if (ImGui::BeginPopup("Build Options"))
	{
		if (ImGui::Button("Build"))
		{
            bp::system("fpm build");
			ImGui::CloseCurrentPopup();
		}

        if (ImGui::Button("Run"))
        {
            bp::system("fpm run");
            ImGui::CloseCurrentPopup();
        }

        if (ImGui::Button("Test"))
        {
			bp::system("fpm test");
			ImGui::CloseCurrentPopup();
        }

		ImGui::EndPopup();
	}
}


