#pragma once

#include <imgui.h>
#include <boost/process.hpp>
#include <iostream>
#include <fstream>

class CreateNewFile
{
public:
    CreateNewFile() = default;

    void NewFile()
    {
        if(ImGui::Button("New File"))
        {
            ImGui::OpenPopup("newfile_popup");
        }
        if(ImGui::BeginPopup("newfile_popup"))
        {
            if(ImGui::InputText("Enter New File Name: ", FileNameBuffer, sizeof(FileNameBuffer)))
            {

                std::ofstream newFile(FileNameBuffer);

                if (newFile.is_open())
                {
                    newFile.close();
                }
                else
                {
                    std::cout << "Error creating the file.\n";
                }
            }

            ImGui::EndPopup();
        }
    }


private:
    char FileNameBuffer[256] = "";
};