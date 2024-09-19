#include "mainfunc.h"
#include "boost/process.hpp"
#include "../colorText/TextEditor.h"
#include "FileTree/FileTree.h"
#include "c_Parser.h"
#include "Config.h"
#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <memory>
#include <vector>

using namespace std;
namespace bp = boost::process;
namespace fs = boost::filesystem;

int compileRes;
ostringstream oss;
ostringstream setStr;
FileTree fileObj;

char multiPurp::buf[2048]{ '\0' };
//char multiPurp::ftcbuf[256]{ '\0' };
//char multiPurp::buildDir[256]{ '\0' };
//char multiPurp::exeName[256]{ '\0' };

std::unique_ptr<std::istream> fileContent; // Unique pointer to hold the file content

//TODO: Add error detection
// Highlighting is done by ImGuiColorTextEdit. The repo: https://github.com/BalazsJako/ImGuiColorTextEdit

std::string multiPurp::chooseFilePath()
{
    nfdchar_t* outPath = NULL;
    nfdresult_t result = NFD_OpenDialog("f90", NULL, &outPath);  // Opens dialog for Fortran files
    if (result == NFD_OKAY)
    {
        std::string filePath(outPath);
        free(outPath);  // Free the path memory
        return filePath;
    }
    else if (result == NFD_CANCEL)
    {
        std::cout << "User canceled the file selection." << std::endl;
        return "";
    }
    else
    {
        std::cerr << "Error: " << NFD_GetError() << std::endl;
        return "";
    }
}

bool multiPurp::createFile(const std::string& filePath)
{
    std::ofstream newFile(filePath);
    if (newFile.is_open())
    {
        newFile.close();
        std::cout << "File created at: " << filePath << std::endl;
        return true;
    }
    else
    {
        std::cerr << "Error creating file at: " << filePath << std::endl;
        return false;
    }
}

std::string multiPurp::readFileContent(const std::string& filePath)
{
    std::ifstream file(filePath);
    if (file.is_open())
    {
        std::string content((std::istreambuf_iterator<char>(file)),
            std::istreambuf_iterator<char>());
        file.close();
        return content;
    }
    else
    {
        std::cerr << "Error reading file: " << filePath << std::endl;
        return "";
    }
}

bool multiPurp::saveToFile(const std::string& filePath, const std::string& content)
{
    std::ofstream file(filePath);
    if (file.is_open())
    {
        file << content;
        file.close();
        std::cout << "Content saved to: " << filePath << std::endl;
        return true;
    }
    else
    {
        std::cerr << "Error saving to file: " << filePath << std::endl;
        return false;
    }
}


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

        c_Parser parse;
            parse.parseCode(editor);

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
        if (ImGui::Button("Open File"))
        {
            std::string filePath = chooseFilePath();
            if (!filePath.empty())
            {
                std::string content = readFileContent(filePath);
                editor.SetText(content);  // Set the file content in the editor
            }
        }

        if (ImGui::Button("Save File"))
        {
            std::string filePath = chooseFilePath();
            if (!filePath.empty())
            {
                saveToFile(filePath, editor.GetText());  // Save the editor content to the file
            }
        }

        multiPurp::Compilefunc();

        //Terminal term;
        //term.Render();

        ImGui::EndMainMenuBar();
    }

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
            try {
                std::stringstream ss;
                ss << Config::buildCom;
                std::string command = ss.str();
                bp::system(command);
                ImGui::Text("Build command executed successfully.");
            }
            catch (const std::exception& e) {
                ImGui::Text("Error executing build: %s", e.what());
            }
            ImGui::CloseCurrentPopup();
        }

        if (ImGui::Button("Run"))
        {
            try {
                std::stringstream ss;
                ss << Config::runCom;
                std::string command = ss.str();
                bp::system(command);
                ImGui::Text("Run command executed successfully.");
            }
            catch (const std::exception& e) {
                ImGui::Text("Error executing build: %s", e.what());
            }
            ImGui::CloseCurrentPopup();
        }

        if (ImGui::Button("Test"))
        {
            try {
                std::stringstream ss;
                ss << Config::testCom;
                std::string command = ss.str();
                bp::system(command);
                ImGui::Text("Test command executed successfully.");
            }
            catch (const std::exception& e) {
                ImGui::Text("Error executing build: %s", e.what());
            }
            ImGui::CloseCurrentPopup();
        }

        ImGui::EndPopup();
    }
}