#include "colorText/TextEditor.h"
#include "imgui.h"
#include "imgui-SFML.h"
#include "mainfunc/mainfunc.h"
#include "mainfunc/nfd.h"
#include "mainfunc/f_MainMenu.h"
#include "mainfunc/FileTree/FileTree.h"

#include <fstream>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <sstream>

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

int main() 
{
    sf::VideoMode desktopSize = sf::VideoMode::getDesktopMode();

    f_MainMenu::entryPoint();


    sf::RenderWindow window(desktopSize, "FortIDE");
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);
    TextEditor editor; // Create a TextEditor instance
    FileTree fileTree;
    
    fileTree.setFileClickCallback([&editor](const std::string& filePath) 
    {
        loadFileIntoEditor(filePath, editor);
    });

    
    
    sf::Clock deltaClock;
    char buf[2048];

    while (window.isOpen())
    {
        boost::filesystem::current_path();
        sf::Event event;
        while (window.pollEvent(event))

        ImGui::SFML::ProcessEvent(event);

        if (event.type == sf::Event::Closed)
        {
            window.close();
        }






        ImGui::SFML::Update(window, deltaClock.restart());
            //This is the creation of the editor. Pretty self-explanatory.
            // Update to pass the editor instance
        multiPurp teditor;
        teditor.mainEditor(editor);

        multiPurp t_menuItems;
        t_menuItems.menuBarfunc(editor);

        fileTree.treeNode();


        window.clear();
        ImGui::SFML::Render(window);
        window.display();
    }

    return 0;
}