#include "mainfunc.h"
#include "boost/process.hpp"
#include "../colorText/TextEditor.h"
#include <cstdlib>
#include <string>
#include <windows.h>
#include <fstream>
#include <iostream>
#include <memory>

using namespace std;
namespace bp = boost::process;
namespace fs = boost::filesystem;
int compileRes;
ostringstream oss;
ostringstream setStr;

char multiPurp::buf[2048]{ '\0' };
char multiPurp::ftcbuf[256]{ '\0' };
char multiPurp::buildDir[256]{ '\0' };
char multiPurp::exeName[256]{ '\0' };

std::unique_ptr<std::string> fileContent; // Unique pointer to hold the file content


// Highlighting is done by ImGuiColorTextEdit. The repo: https://github.com/BalazsJako/ImGuiColorTextEdit
void multiPurp::mainEditor(TextEditor& editor)
{
    TextEditor::ErrorMarkers f_markers;
    static bool isLanguageSet = false;
    if (!isLanguageSet)
    {
        auto lang = TextEditor::LanguageDefinition::Fortran();
        editor.SetLanguageDefinition(lang);
        isLanguageSet = true;
    }

    ImVec2 fixedWidgetPosition = ImVec2(0, 30); // Set your desired fixed position here
    ImVec2 sizedWidget = ImVec2(400, 450);

    ImGui::SetNextWindowPos(fixedWidgetPosition, ImGuiCond_Always);
    ImGui::SetNextWindowSize(sizedWidget, ImGuiCond_Always);

    if (ImGui::Begin("Text Editor", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize))
    {
        editor.Render("Text Editor");
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

void multiPurp::menuBarfunc(TextEditor& editor)
{
    static bool openDialog = false; // Track whether the file dialog is open
    static bool saveDialog = false;

    if (ImGui::Button("Open")) 
    {
        openDialog = true; // Set flag to open the file dialog
    }
    //if (ImGui::IsKeyPressed(ImGuiKey_LeftCtrl) || ImGui::IsKeyPressed(ImGuiKey_RightCtrl) && ImGui::IsKeyPressed(ImGuiKey_O))
    //{
      //  openDialog = true; // Set flag to open the file dialog
    //}

    if (ImGui::Button("Save"))
    {
        saveDialog = true; // Set flag to open the file dialog
    }
    //if (ImGui::IsKeyPressed(ImGuiKey_LeftCtrl) || ImGui::IsKeyPressed(ImGuiKey_RightCtrl) && ImGui::IsKeyPressed(ImGuiKey_S))
    //{
      //  saveDialog = true; // Set flag to open the file dialog
    //}


    if (openDialog)
    {
        nfdchar_t* outPathBuf = NULL;
        nfdresult_t result = NFD_OpenDialog(NULL, NULL, &outPathBuf);
        if (result == NFD_OKAY)
        {
            std::ifstream file(outPathBuf);
            if (file.is_open())
            {
                // Read the contents of the file into a string
                std::ostringstream oss;
                oss << file.rdbuf();
                std::string fileContent = oss.str();

                // Set the content of the file to the editor
                editor.SetText(fileContent.c_str());
            }
            else
            {
                std::cerr << "Error: Unable to open file" << std::endl;
            }
            // Close the file
            file.close();

            // Free the memory allocated by NFD_OpenDialog
            free(outPathBuf);
        }
        // Reset the flag after opening the dialog
        openDialog = false;
    }

    if (saveDialog)
    {
        nfdchar_t* savePathBuf = NULL;
        nfdresult_t result = NFD_SaveDialog(NULL, NULL, &savePathBuf);

        if (result == NFD_OKAY)
        {
            std::string filePathWithExtension(savePathBuf);
            filePathWithExtension += ".f90";

            std::ofstream file(filePathWithExtension, std::ios::out | std::ios::trunc);

            if (file.is_open())
            {
                file << editor.GetText(); // Save the content of the editor
                file.close();
            }
            free(savePathBuf); // Free the memory allocated by NFD_SaveDialog
        }
        saveDialog = false;
    }

    multiPurp::Compilefunc();

    auto cpos = editor.GetCursorPosition();
    ImGui::Text("%6d/%-6d %6d lines  | %s | %s | %s | %s",
        cpos.mLine + 1, cpos.mColumn + 1, editor.GetTotalLines(),
        editor.IsOverwrite() ? "Ovr" : "Ins",
        editor.CanUndo() ? "*" : " ",
        editor.GetLanguageDefinition().mName.c_str(), NULL);
}

void multiPurp::Compilefunc()
{
    if (ImGui::Button("Compile"))
    {

        bp::system("fpm build");
        bp::system("fpm run");
        /*
        boost::filesystem::path p = bp::search_path("gfortran");

        std::vector<std::string> buildPath = { buildDir, "\\", exeName };
        std::vector<std::string> fileCompPath = { ftcbuf };
        std::vector<std::string> args = { "-Wextra", "-v", "-o" };

        compileRes = bp::system(p, args, fileCompPath, buildPath);
        if (compileRes == 0)
        {
            printf("Compiled");
            string namedExe = exeName;
            string cmpcmd = "./" + namedExe;
            bp::system(cmpcmd);
        }

        boost::filesystem::current_path(currentDir);
        */
    }
}
