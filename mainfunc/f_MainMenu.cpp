#include "f_MainMenu.h"

char f_MainMenu::buf[256]{ '\0' };

int f_MainMenu::f_genNewProject()
{
    std::string projectTitle(buf);
    std::string title = "fpm new " + projectTitle;
    boost::process::system(title);

    return 0;
}
int f_MainMenu::startMenu() {
    sf::VideoMode autoReSize = sf::VideoMode::getDesktopMode();
    unsigned int sizeY = autoReSize.height;
    unsigned int sizeX = autoReSize.width;
    ImVec2 fixedfieldPos = ImVec2(850, 0);
    ImVec2 sizedWidget = ImVec2(500, sizeY);

    ImGui::SetNextWindowPos(fixedfieldPos, ImGuiCond_Always);
    ImGui::SetNextWindowSize(sizedWidget, ImGuiCond_Always);
    ImGui::Begin("##", NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar);
    ImGui::InputText("##", buf, sizeof(buf), NULL, NULL);

    if (ImGui::Button("New Project", ImVec2(200, 100))) {
        nfdchar_t* wdPath = NULL;
        nfdresult_t result = NFD_PickFolder(NULL, &wdPath);

        if (result == NFD_OKAY) {
            boost::filesystem::current_path(wdPath);
            std::cout << "Current Working Directory: " << boost::filesystem::current_path().string() << std::endl;
            free(wdPath);

            if (f_genNewProject() == 0)
            {
                std::cout << "Project created successfully in directory: " << boost::filesystem::current_path().string() << std::endl;
                boost::filesystem::current_path(buf);
                std::cout << "New path: " << boost::filesystem::current_path().string() << std::endl;
            }
            else
            {
                std::cout << "Project failed";
            }
        }
        else if (result == NFD_CANCEL) {
            std::cout << "User canceled the operation." << std::endl;
        }
        else {
            std::cerr << "Error: " << NFD_GetError() << std::endl;
        }
    }

    if (ImGui::Button("Open Project"))
    {
        nfdchar_t* opPath = NULL;
        nfdresult_t result = NFD_PickFolder(NULL, &opPath);

        if (result == NFD_OKAY) {
			boost::filesystem::current_path(opPath);
			std::cout << "Current Working Directory: " << boost::filesystem::current_path().string() << std::endl;
			free(opPath);
		}
		else if (result == NFD_CANCEL) {
			std::cout << "User canceled the operation." << std::endl;
		}
		else {
			std::cerr << "Error: " << NFD_GetError() << std::endl;
		}
    }

    ImGui::End();
    return 0;
}


int f_MainMenu::entryPoint()
{
    sf::VideoMode autoSize = sf::VideoMode::getDesktopMode();
    sf::RenderWindow window(autoSize, "Menu");
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);

    f_MainMenu mainMenu;

    sf::Clock deltaClock;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(event);

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        window.clear();
        mainMenu.startMenu();
        ImGui::SFML::Render(window);
        window.display();
    }
    ImGui::SFML::Shutdown();

    return 0;
}