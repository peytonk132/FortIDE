#include "mainfunc.h"
#include "boost/process.hpp"
#include <cstdlib>
#include <string>


//HONEYDO'S:
//Make all windows fixed.
//Find out why build doesn't work.


using namespace std;
namespace bp = boost::process;
int compileRes;
ostringstream oss;
ostringstream setStr;

char multiPurp::buf[2048]{ '\0' };
char multiPurp::ftcbuf[256]{ '\0' };
char multiPurp::objbuf[256]{ '\0' };

/*This is, again just a function that
keeps from throwing an error if you backspace too far.*/
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


/*This is the main editor. This has no systax highlighting as I still need to
work on an LSP for this. I'm think about using FortLS but I'm not sure yet.
*/
void multiPurp::mainEditor()
{
    /*This fixes the editor window in place so it can't be moved aorund under any circumstances.
    I think I'll use this feature for some other things too.*/
    bool isWidgetFixed = true;
    ImVec2 fixedWidgetPosition = ImVec2(0, 18); // Set your desired fixed position here
    bool isWidgetSized = true;
    ImVec2 sizedWidget = ImVec2(400, 450);
    ImGui::SetNextWindowPos(fixedWidgetPosition, ImGuiCond_Always);
    ImGui::SetNextWindowSize(sizedWidget, ImGuiCond_Always);
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



/*This is the input field that allows you to either manually or by opening your
file system and clicking on the file. This is used for the Compilefunc() and is
in the process of being setup for build() to point it to where the object file is.
It creates an Imgui begin window with only a couple input fields to it.
Something fairly simple and starightforward.*/
void multiPurp::settingsInput() {
    
    bool isfieldfixed = true;
    ImVec2 fixedfieldPos = ImVec2(415, 18);
    ImGui::SetNextWindowPos(fixedfieldPos, ImGuiCond_Always);
    ImGui::Begin("Input", NULL ,ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove);
    ImGui::InputText("File to be compiled path: ", ftcbuf, sizeof(ftcbuf));
    if (ImGui::Button("..."))
    {
        nfdresult_t setres = NFD_OpenDialog(NULL, NULL, &settingsBuf);

        if (setres == NFD_OKAY)
        {
            /*This is the string that keeps the file path for
            Compilefunc() to read from that gives it the path to compile
            the file.*/
            strncpy(ftcbuf, settingsBuf, sizeof(ftcbuf));
        }
    }
    ImGui::End();
}


/*This is the open function. This creates a button in the menu bar that allows for you to
open your native file system and it will display the contents of the file in
the text editor. This simply uses NFD_OpenDialog to put it to a string that then gets read by
the editor.*/
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
                buf[sizeof(buf) - 1] = '\0'; // so you don't get an error when you backspace too far. It's a temp fix and will be investigated later.
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


/*This is the save function that allows you to save whatever you wrote in the text editor
to a file. It automatically appends ".f90" so I don't have to (I'm lazy). Again, fairly simple
and I'll improve upon this in the future.*/
void multiPurp::save() {
    if (ImGui::Button("Save")) {
        nfdchar_t* savePathBuf = NULL;
        nfdresult_t result = NFD_SaveDialog(NULL, NULL, &savePathBuf);

        if (result == NFD_OKAY) 
        {
            // Append ".f90" to the filename
            std::string filePathWithExtension(savePathBuf);
            filePathWithExtension += ".f90";

            // Open file for writing and truncate if it already exists
            std::ofstream file(filePathWithExtension, std::ios::out | std::ios::trunc);

            if (file.is_open()) 
            {
                file << buf;
                file.close();
            }
        }
    }
}

/*This is the compile function for fortran. This is just simple system commands 
that execute when a button is pressed.*/
void multiPurp::Compilefunc()
{
    if (ImGui::Button("Compile"))
    {
        boost::filesystem::path p = bp::search_path("gfortran");
        
        std::vector<std::string> args = {"-Wextra", "-o" "main"};
        compileRes = bp::system(p, args, ftcbuf);
        if (compileRes == 0)
        {
            printf("Compiled");
            bp::system("./main.exe");
        }
    }
}