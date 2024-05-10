#include "imgui.h"
#include "imgui-SFML.h"
#include "NFD/src/include/nfd.h"
#include "mainfunc/mainfunc.h"

#include <SFML/Graphics.hpp>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode(640, 480), "FortIDE");
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);

    sf::Clock deltaClock;
    char buf[2048];

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))

            ImGui::SFML::ProcessEvent(event);

        if (event.type == sf::Event::Closed)
        {
            window.close();
        }

        ImGui::SFML::Update(window, deltaClock.restart());
        multiPurp teditor;
        teditor.mainEditor();

        if (ImGui::BeginMainMenuBar())
        {
            multiPurp open;
            open.open();
            multiPurp save;
            save.save();
            multiPurp compile;
            compile.Compilefunc();
            multiPurp build;
            build.build();

            ImGui::EndMainMenuBar();
        }

        ImGui::ShowDebugLogWindow();


        window.clear();
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();

    return 0;
}