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

        

        

        

        if (ImGui::BeginMainMenuBar())
        {
            if (ImGui::BeginMenuBar())
            {
                if (ImGui::BeginTabBar("My Tab"))
                {
                    if (ImGui::BeginTabItem("Test"))
                    {
                        const char* items[] = { "AAAA", "BBBB", "CCCC", "DDDD", "EEEE", "FFFF", 
                                                "GGGG", "HHHH", "IIII", "JJJJ", "KKKK", "LLLLLLL", 
                                                "MMMM", "OOOOOOO", "PPPP", "QQQQQQQQQQ", "RRR", "SSSS" };
                        static const char* current_item = NULL;

                        if (ImGui::BeginCombo("##combo", current_item)) // The second parameter is the label previewed before opening the combo.
                        {
                            for (int n = 0; n < IM_ARRAYSIZE(items); n++)
                            {
                                bool is_selected = (current_item == items[n]); // You can store your selection however you want, outside or inside your objects
                                if (ImGui::Selectable(items[n], is_selected))
                                {
                                    current_item = items[n];

                                    if (is_selected)
                                    {
                                        ImGui::SetItemDefaultFocus();   // You may set the initial focus when opening the combo (scrolling + for keyboard navigation support)
                                    }
                                }
                            }
                            ImGui::EndCombo();
                        }
                        ImGui::EndTabItem();
                    }
                    ImGui::EndTabBar();
                }
                if (ImGui::MenuItem("Open", "Ctrl+O")) 
                {
                    FileMan open;
                    open.fileOpen();
                }
                ImGui::EndMenuBar();
            }
            ImGui::EndMainMenuBar();
        }
        window.clear();
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}