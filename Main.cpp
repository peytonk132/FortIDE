//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

#include "imgui.h"
#include "imgui-SFML.h"
#include "mainfunc/nfd.h"
#include "mainfunc/mainfunc.h"
//#include "mainfunc/c_Parser.h"
#include "mainfunc/f_MainMenu.h"
#include "colorText/TextEditor.h"
#include "mainfunc/FileTree/FileTree.h"
#include "mainfunc/searchParser/s_Parser.h"

#include <fstream>
#include <memory>
#include <stdexcept>
#include <iostream>
#include <string>
#include <sstream>
#include <array>
#include <cstdio>
#include <SFML/Graphics.hpp>
//#include <boost/filesystem.hpp>
#include <sstream>
#include <toml.hpp>

using namespace std;

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

std::string exec(const char* cmd) {
    std::array<char, 128> buffer{};
    std::string result;
    std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);
    if (!pipe) {
        throw std::runtime_error("_popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}

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

void installPackage(const std::string& toml) {
    // Run the command to install the package
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
    // Capture the output of 'fpm search' command
    std::string fpmOutput;
    try
    {
        fpmOutput = exec("fpm-search --verbose");
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
    if (outFile.is_open()) {
        outFile << xml;
        outFile.close();
    }
    else {
        std::cerr << "Unable to open file for writing\n";
    }

    // Load packages from the XML file
    packages = loadPackagesFromXML("packages.xml");


    sf::VideoMode desktopSize = sf::VideoMode::getDesktopMode();

    f_MainMenu::entryPoint();

    sf::RenderWindow window(desktopSize, "FortIDE");
    window.setVerticalSyncEnabled(true); // Enable vertical sync
    ImGui::SFML::Init(window);
    TextEditor editor; // Create a TextEditor instance
    FileTree fileTree;

    fileTree.setFileClickCallback([&editor](const std::string& filePath)
        {
            loadFileIntoEditor(filePath, editor);
        });
    /*fileDir.setFileClickCallback([](const std::string& path) {
        std::cout << "File clicked: " << path << std::endl;
        });*/


    sf::Clock deltaClock;

    while (window.isOpen())
    {
        boost::filesystem::current_path();
<<<<<<< Updated upstream
        sf::Event event;
        while (window.pollEvent(event))
        {
            ImGui::SFML::ProcessEvent(event);
=======

        while (const std::optional<sf::Event> event = window.pollEvent())
        {
            ImGui::SFML::ProcessEvent(window, *event);
>>>>>>> Stashed changes

            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        // This is the creation of the editor. Pretty self-explanatory.
        // Update to pass the editor instance

        ImVec2 fixedWidgetPosition = ImVec2(800, 30); // Set your desired fixed position here
        ImVec2 sizedWidget = ImVec2(570, 450);

        ImGui::SetNextWindowPos(fixedWidgetPosition, ImGuiCond_Always);
        ImGui::SetNextWindowSize(sizedWidget, ImGuiCond_Always);
        ImGui::Begin("Package Installer");
        for (const auto& pkg : packages) {
            ImGui::Text("Version: %s", pkg.version.c_str());
            ImGui::TextWrapped("Description: %s", pkg.description.c_str());
            ImGui::Text("License: %s", pkg.license.c_str());
            ImGui::Text("Author: %s", pkg.author.c_str());
            ImGui::Text("Toml: %s", pkg.toml.c_str());
            ImGui::Separator();
        }
        ImGui::End();

<<<<<<< Updated upstream
        

=======
        git_libgit2_init();
        ImGui::ShowDemoWindow();
>>>>>>> Stashed changes
        multiPurp teditor;
        teditor.mainEditor(editor);
        //c_Parser teditor;
        //teditor.mainEditor(editor);


        multiPurp t_menuItems;
        t_menuItems.menuBarfunc(editor);

        fileTree.treeNode();

        window.clear();
        ImGui::SFML::Render(window);
        window.display();
        git_libgit2_shutdown();
    }

    ImGui::SFML::Shutdown();
    return 0;
}
