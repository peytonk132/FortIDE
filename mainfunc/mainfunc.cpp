#include "mainfunc.h"
#include "boost/process.hpp"
#include <cstdlib>
#include <string>



using namespace std;
namespace bp = boost::process;
int compileRes;
ostringstream oss;
ostringstream setStr;

char multiPurp::buf[2048]{ '\0' };
char multiPurp::ftcbuf[256]{ '\0' };
char multiPurp::objbuf[256]{ '\0' };

int checkEmpty(char* buf, int size)
{
    if (buf == nullptr) // Check if the buffer pointer is null
    {
        return 0;
    }

    if (buf[0] == '\0') // Check if the buffer is empty (contains only null terminator)
    {
        return 1; // Buffer is empty
    }

    return 0; // Buffer is not empty
}


    
void multiPurp::mainEditor()
{
    bool isWidgetFixed = true;
    ImVec2 fixedWidgetPosition = ImVec2(0, 18); // Set your desired fixed position here

    ImGui::SetNextWindowPos(fixedWidgetPosition, ImGuiCond_Always);
    if (ImGui::Begin("Text Editor", &isWidgetFixed, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize))
    {

        //static char buf[2048];
        ImGui::InputTextMultiline("Editor", buf, sizeof(buf), ImVec2(400, 500), ImGuiInputTextFlags_AllowTabInput);

        if (ImGui::IsKeyPressed(ImGuiKey_Enter))
        {

        }
        
        checkEmpty(buf, sizeof(buf));

        ImGui::End();
    }
}

void multiPurp::settingsInput() {
    ImGui::Begin("Input");
    ImGui::InputText("File to be compiled path: ", ftcbuf, sizeof(ftcbuf));
    if (ImGui::Button("...")) 
    {
        nfdresult_t setres = NFD_OpenDialog(NULL, NULL, &settingsBuf);

        if (setres == NFD_OKAY) 
        {
            // Copy the selected file path to ftcbuf
            strncpy(ftcbuf, settingsBuf, sizeof(ftcbuf));
        }
    }
    
    ImGui::InputText("object file to be built: ", objbuf, sizeof(objbuf));
    if (ImGui::Button("..."))
    {
        nfdresult_t setres = NFD_OpenDialog(NULL, NULL, &settingsBuf);

        if (setres == NFD_OKAY)
        {
            // Copy the selected file path to ftcbuf
            strncpy(objbuf, settingsBuf, sizeof(objbuf));
        }
    }
    ImGui::End();
}



void multiPurp::open()
{
    if (ImGui::Button("Open"))
    {

        nfdresult_t result = NFD_OpenDialog(NULL, NULL, &outPathBuf);


        if (result == NFD_OKAY)
        {
            ifstream file(outPathBuf);
            if (file.is_open())
            {
                oss << file.rdbuf();
                string fileContent = oss.str();
                strncpy(buf, fileContent.c_str(), sizeof(buf));
                buf[sizeof(buf) - 1] = '\0'; // Ensure null termination
                file.close();

            }
            else
            {
                // Failed to open the file
                std::cerr << "Failed to open the selected file." << std::endl;
            }
        }
    }
}

void multiPurp::save()
{
    if (ImGui::Button("Save"))
    {
        nfdchar_t* savePathBuf = NULL;
        nfdresult_t result = NFD_SaveDialog(NULL, NULL, &savePathBuf);

        if (result == NFD_OKAY)
        {
            // Append ".f90" to the filename
            std::string filePathWithExtension(savePathBuf);
            filePathWithExtension += ".f90";

            // Open file for writing
            std::ofstream file(filePathWithExtension);

            if (file.is_open())
            {

                file << buf;
                file.close();
            }
        }
    }
}

void multiPurp::Compilefunc()
{
    if (ImGui::Button("Compile"))
    {
        boost::filesystem::path p = bp::search_path("gfortran");
        
        std::vector<std::string> args = {"-c"};
        compileRes = bp::system(p, args, ftcbuf);
        if (compileRes == 0)
        {
            printf("Compiled");

        }
    }
}


void multiPurp::build()
{
    if (ImGui::Button("Build"))
    {
        if (compileRes == 0)
        {
            int buildProc = bp::system("gfortran hello.o - o main");
            int buildRes = bp::system("./main");

            if (buildProc != 0)
            {
                throw(strerror(errno));
            }
        }
    }
}

