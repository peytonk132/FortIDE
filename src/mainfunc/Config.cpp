#define COMMAND_SIZE 256
#include "Config.h"
#include <imgui.h>
#include <imgui-SFML.h>
#include <iostream>

char buildCom;
char runCom;
char testCom;
char* buildComArr = new char[COMMAND_SIZE];  // Initialize vector with 256 elements (filled with 0)
char* runComArr = new char[COMMAND_SIZE];
char* testComArr = new char[COMMAND_SIZE];

void Config::SettingsMenu()
{
    if (ImGui::Button("Settings"))
    {
        ImGui::OpenPopup("Settings");
    }

    if (ImGui::BeginPopup("Settings", 0))
    {
        if (ImGui::Button("Build Command"))
        {
            ImGui::OpenPopup("Build");
        }
        if (ImGui::BeginPopup("Build", 0))
        {
            ImGui::InputText("Build Command", buildComArr, COMMAND_SIZE); // Use .data() for the char array
            if (ImGui::Button("Ok"))
            {
                std::cout << "Written successfully!" << std::endl;
                ImGui::CloseCurrentPopup();
            }
            ImGui::EndPopup();
        }

        if (ImGui::Button("Run Command"))
        {
            ImGui::OpenPopup("Run");
        }
        if (ImGui::BeginPopup("Run", 0))
        {
            ImGui::InputText("Run Command", runComArr, COMMAND_SIZE); // Use .data() for the char array
            if (ImGui::Button("Ok"))
            {
                std::cout << "Written successfully!" << std::endl;
                ImGui::CloseCurrentPopup();
            }
            ImGui::EndPopup();
        }

        if (ImGui::Button("Test Command"))
        {
            ImGui::OpenPopup("Test");
        }
        if (ImGui::BeginPopup("Test", 0))
        {
            ImGui::InputText("Test Command", testComArr, COMMAND_SIZE); // Use .data() for the char array
            if (ImGui::Button("Ok"))
            {
                std::cout << "Written successfully!" << std::endl;
                ImGui::CloseCurrentPopup();
            }
            ImGui::EndPopup();
        }

        ImGui::EndPopup();
    }
}

void Config::configMenu()
{
    // Implement your config menu if needed
}
