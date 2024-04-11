#include "imgui.h"
#include "imgui-SFML.h"
#include "FileSystem/FileMan.h"

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>

int main() 
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "ImGui + SFML = <3");
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);

    sf::Clock deltaClock;
    while (window.isOpen()) 
    {
        sf::Event event;
        while (window.pollEvent(event)) 
        {
            ImGui::SFML::ProcessEvent(window, event);

            if (event.type == sf::Event::Closed) 
            {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        ImGui::Begin("Hello, world!");
        if (ImGui::BeginMainMenuBar())
        {
            if (ImGui::BeginMenuBar())
            {
                if (ImGui::MenuItem("Open", "Ctrl+O")) 
                {
                    FileMan open;
                    open.fileOpen();
                }
                ImGui::EndMenuBar();
            }
            ImGui::EndMainMenuBar();
        }
        ImGui::End();

        window.clear();
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}