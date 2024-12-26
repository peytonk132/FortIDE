//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#ifdef NDEBUG
#undef NDEBUG
#endif

#include <imgui.h>
#include <imgui-SFML.h>
#include <portable-file-dialogs.h>
#include "mainfunc/FileTree/Editor.h"
#include <git2.h>
//#include "mainfunc/c_Parser.h"
#include "mainfunc/f_MainMenu.h"
#include <TextEditor.h>
#include "mainfunc/searchParser/s_Parser.h"

#include <fstream>
#include <memory>
#include <stdexcept>
#include <iostream>
#include <string>
#include <sstream>
#include <array>
#include <SFML/Graphics.hpp>

using namespace std;

// Utility function to load a file's content into the TextEditor
void loadFileIntoEditor(const std::string& filePath, TextEditor& editor)
{
    std::ifstream file(filePath);
    if (file.is_open())
    {
        std::stringstream buffer;
        buffer << file.rdbuf();
        editor.SetText(buffer.str());
    }
}

// Function to execute a system command and capture its output
std::string exec(const char* cmd)
{
    std::array<char, 128> buffer{};
    std::string result;
    std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);
    if (!pipe)
    {
        throw std::runtime_error("_popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
    {
        result += buffer.data();
    }
    return result;
}

// Function to check if a package exists in the fpm.toml file
bool isPackageInFpmToml(const std::string& packageName)
{
    std::ifstream infile("fpm.toml");
    std::string line;
    while (std::getline(infile, line))
    {
        if (line.find(packageName) != std::string::npos)
        {
            return true;
        }
    }
    return false;
}

// Function to install a package using fpm
void installPackage(const std::string& toml)
{
    std::string command = "fpm run -- demo substitute fpm.toml";
    try
    {
        exec(command.c_str());
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error executing command: " << e.what() << std::endl;
    }
    std::cout << "Installed package: " << toml << std::endl;
}

int main()
{
    f_MainMenu::entryPoint();
    ImGui::CreateContext();
    //ImGui::SetCurrentContext();
    // Run the `fpm search` command and capture its output
    std::string fpmOutput;
    try
    {
        fpmOutput = exec("fpm search --verbose");
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error executing command: " << e.what() << std::endl;
        return 1;
    }

    // Parse the output and convert to XML
    auto packages = parseFpmSearchOutput(fpmOutput);
    std::string xml = convertToXML(packages);

    // Write the XML to a file
    std::ofstream outFile("packages.xml");
    if (outFile.is_open())
    {
        outFile << xml;
        outFile.close();
    }
    else
    {
        std::cerr << "Unable to open file for writing\n";
    }

    // Load packages from the XML file
    packages = loadPackagesFromXML("packages.xml");

    sf::VideoMode desktopSize = sf::VideoMode::getDesktopMode();

    //IM_ASSERT(false); // Test if assertions are enabled and functioning.
    sf::RenderWindow window(desktopSize, "FortIDE");
    ImGui::SFML::Init(window);
    window.setVerticalSyncEnabled(true); // Enable vertical sync
    /*if (!io.Fonts->AddFontFromFileTTF("C:\\Users\\Peyton\\Downloads\\Open_Sans\\OpenSans-VariableFont_wdth,wght.ttf", 8.0f)) {
        printf("Failed to load font1.ttf\n");
    }*/
    //ImGui::CreateContext();  // Call this early in your application.

    TextEditor editor; // Create a TextEditor instance

    sf::Clock deltaClock;
    git_libgit2_init();
    while (window.isOpen())
    {
        while (const std::optional<sf::Event> event = window.pollEvent())
        {
            ImGui::SFML::ProcessEvent(window, *event);

            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
        ImGui::SFML::Update(window, deltaClock.restart());
        //ImGui::NewFrame();
        //f_MainMenu::entryPoint();
        //f_MainMenu::startMenu();
        //ImGui::EndFrame();
        
        ImVec2 fixedWidgetPosition = ImVec2(800, 30); // Fixed position for the widget
        ImVec2 sizedWidget = ImVec2(570, 450);

        //ImGui::NewFrame();
        ImGui::SetNextWindowPos(fixedWidgetPosition);
        ImGui::SetNextWindowSize(sizedWidget);
        ImGui::Begin("Package Installer");
        for (const auto& pkg : packages)
        {
            ImGui::Text("Version: %s", pkg.version.c_str());
            ImGui::TextWrapped("Description: %s", pkg.description.c_str());
            ImGui::Text("License: %s", pkg.license.c_str());
            ImGui::Text("Author: %s", pkg.author.c_str());
            ImGui::Text("Toml: %s", pkg.toml.c_str());
            ImGui::Separator();
        }
        ImGui::End();
        //ImGui::EndFrame();
        

        Editor::RenderEditor(editor);
        
        window.clear();
        ImGui::SFML::Render(window);
        window.display();
        //deltaClock.restart(); // Restart clock for next frame
        git_libgit2_shutdown();
    }

    ImGui::SFML::Shutdown();
    return 0;
}
