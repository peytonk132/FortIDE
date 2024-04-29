#include "imgui.h"
#include "imgui-SFML.h"
#include "NFD/src/include/nfd.h"

#include <SFML/Graphics.hpp>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode(640, 480), "ImGui + SFML = <3");
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);

    sf::Clock deltaClock;
    char buf[1024];

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(event);

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        if (ImGui::Begin("Text Editor", nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse)) {
            ImGui::InputTextMultiline("Editor", buf, sizeof(buf), ImVec2(600, 400), ImGuiInputTextFlags_AllowTabInput | ImGuiInputTextFlags_CharsNoBlank);

            if (ImGui::BeginMainMenuBar())
            {
                if (ImGui::Button("Open"))
                {
                    nfdchar_t* outPath = nullptr;
                    nfdresult_t result = NFD_OpenDialog(nullptr, nullptr, &outPath);

                    if (result == NFD_OKAY) {
                        ifstream file(outPath);
                        if (file.is_open()) {
                            stringstream buffer;
                            buffer << file.rdbuf();
                            string fileContents = buffer.str();
                            if (fileContents.size() < sizeof(buf)) {
                                std::strcpy(buf, fileContents.c_str());
                            }
                            else {
                                std::cerr << "File is too large to fit into buffer." << std::endl;
                            }
                            file.close();
                        }
                        free(outPath);
                    }

                    else if (result == NFD_CANCEL) {
                        puts("User pressed cancel.");
                    }
                    else {
                        printf("Error: %s\n", NFD_GetError());
                    }
                }

                if (ImGui::Button("Save")) {
                    nfdchar_t* outPath = nullptr;
                    nfdresult_t result = NFD_SaveDialog(nullptr, nullptr, &outPath);

                    if (result == NFD_OKAY) {
                        ofstream file(outPath);
                        if (file.is_open()) {
                            file << buf;
                            file.close();
                        }
                        free(outPath);
                    }
                    else if (result == NFD_CANCEL) {
                        puts("User pressed cancel.");
                    }
                    else {
                        printf("Error: %s\n", NFD_GetError());
                    }
                }

                if (ImGui::Button("Compile"))
                {
                    const string filePath = "C:/Users/Peyton/Documents/main.f90"; // or provide a valid file path
                    // Command to compile using gfortran
                    string compileCommand = "gfortran -o main2 " + filePath;

                    // Execute the compilation command
                    int result = std::system(compileCommand.c_str());

                    if (result == 0)
                    {
                        std::cout << "Compilation successful." << std::endl;
                    }
                    else
                    {
                        std::cerr << "Compilation failed." << std::endl;
                    }
                }

                ImGui::EndMainMenuBar();
            }

            ImGui::End();
        }

        window.clear();
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();

    return 0;
}
