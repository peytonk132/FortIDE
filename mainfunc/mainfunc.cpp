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

using namespace std;
namespace bp = boost::process;
namespace fs = boost::filesystem;
int compileRes;
ostringstream oss;
ostringstream setStr;
FileTree fileObj;

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
				bp::system("touch placeholder > " + std::string(buf) + ".f90");
				std::cout << "File created successfully" << std::endl;
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
    if (ImGui::Button("Compile"))
    {

        bp::system("fpm build");
        bp::system("fpm run");
    }

    if (ImGui::Button("Test"))
	{
		bp::system("fpm test");
	}
}
