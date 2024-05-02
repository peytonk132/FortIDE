#include "mainfunc.h"


using namespace std;

char multiPurp::buf[2048]{ '\0' };

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
        
        checkEmpty(buf, sizeof(buf));

        ImGui::End();
    }
}

void multiPurp::open()
{
    if (ImGui::Button("Open"))
    {
        nfdchar_t* outPathBuf = NULL;
        nfdresult_t result = NFD_OpenDialog(NULL, "C:\\", &outPathBuf);


        if (result == NFD_OKAY)
        {
            ifstream file(outPathBuf);
            if (file.is_open())
            {
                ostringstream oss;
                oss << file.rdbuf();
                string fileContent = oss.str();
                strncpy(buf, fileContent.c_str(), sizeof(buf));
                buf[sizeof(buf) - 1] = '\0'; // Ensure null termination
                file.close();
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
            ofstream file(savePathBuf);

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
        
    }
}


