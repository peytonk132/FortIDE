#include "f_MainMenu.h"

#include <git2.h>
#include <SFML/Graphics.hpp>
#include <imgui.h>
#include <imgui-SFML.h>
#include <boost/filesystem.hpp>
#include <boost/process.hpp>
#include "nfd.h"
#include <chrono>
#include <ctime>
#include <thread>
#include <cstring>
#include <atomic>

// Buffer for ImGui input
char f_MainMenu::buf[256]{ '\0' };
static char repoUrl[128] = "";
static char localPath[128] = "";
static bool cloneSuccess = false;
static std::string repoPath = "";  // Path to the local repo, can be set dynamically
static char repoPathBuf[256] = ""; // Buffer for InputText

// Declare variables to manage threading
std::atomic<bool> isRepoPickerRunning = false;
std::thread repoPickerThread;

int repoPathPicker() {
    nfdchar_t* outPath = NULL;
    nfdresult_t result = NFD_PickFolder(NULL, &outPath);

    if (result == NFD_OKAY) {
        repoPath = outPath;              // Update std::string with selected path
        std::strncpy(repoPathBuf, repoPath.c_str(), sizeof(repoPathBuf) - 1);  // Sync buffer with repoPath
        repoPathBuf[sizeof(repoPathBuf) - 1] = '\0';  // Ensure null-termination
        free(outPath);  // Free memory allocated by NFD
    }

    return 0;
}

// Function to safely start `repoPathPicker` in a new thread
void startRepoPathPicker() {
    if (isRepoPickerRunning) return;

    isRepoPickerRunning = true;

    // Launch repoPathPicker in a new thread
    repoPickerThread = std::thread([]() {
        repoPathPicker(); // Call the function
        isRepoPickerRunning = false; // Reset flag after completion
        });

    // Detach the thread to let it run independently
    repoPickerThread.detach();
}

bool cloneRepository(const std::string& url, const std::string& path) {
    // Initialize libgit2 library
    git_libgit2_init();

    // Repository object to store the cloned repo
    git_repository* repo = nullptr;

    // Perform the clone operation
    int error = git_clone(&repo, url.c_str(), path.c_str(), nullptr);
    if (error != 0) {
        const git_error* e = git_error_last();
        std::cerr << "Error cloning repository: " << (e && e->message ? e->message : "Unknown error") << std::endl;
        git_libgit2_shutdown();
        return false;
    }

    // Free resources and shutdown libgit2
    git_repository_free(repo);
    git_libgit2_shutdown();

    std::cout << "Repository cloned successfully to " << path << std::endl;
    return true;
}

int git_window() {
    if (ImGui::Button("Clone A Repo")) {
        ImGui::OpenPopup("Git_Control");
    }

    if (ImGui::BeginPopup("Git_Control")) {
        ImGui::Begin("Clone");
        ImGui::Text("URL: ");
        ImGui::SameLine();
        ImGui::InputText("Repo Url", repoUrl, sizeof(repoUrl));

        ImGui::Text("PATH: ");
        ImGui::SameLine();
        if (ImGui::InputText("Local Path", repoPathBuf, sizeof(repoPathBuf))) {
            repoPath = repoPathBuf;  // Sync repoPath with updated buffer
        }
        ImGui::SameLine();

        if (ImGui::Button("...")) {
            startRepoPathPicker(); // Start `repoPathPicker` in a new thread
        }

        if (isRepoPickerRunning) {
            ImGui::Text("Loading path picker..."); // Display loading message
        }
        else if (ImGui::Button("Clone")) {
            cloneSuccess = cloneRepository(repoUrl, repoPath);
        }

        ImGui::End();
        ImGui::EndPopup();
    }

    return 0;
}



int f_MainMenu::f_genNewProject()
{
    std::string projectTitle(buf);
    std::string title = "fpm new " + projectTitle;
    boost::process::system(title);
    return 0;
}

void getDate()
{
    auto now = std::chrono::system_clock::now();
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    std::tm* localTime = std::localtime(&currentTime);
}

int f_MainMenu::startMenu()
{
    sf::VideoMode autoReSize = sf::VideoMode::getDesktopMode();
    unsigned int sizeY = autoReSize.size.x;
    unsigned int sizeX = autoReSize.size.y;
    ImVec2 fixedfieldPos = ImVec2(850, 0);
    ImVec2 sizedWidget = ImVec2(500, sizeY);

    ImGui::SetNextWindowPos(fixedfieldPos, ImGuiCond_Always);
    ImGui::SetNextWindowSize(sizedWidget, ImGuiCond_Always);
    ImGui::Begin("##", NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar);

    if (ImGui::Button("New Project", ImVec2(200, 100)))
    {
        ImGui::OpenPopup("New Project");
    }

    if (ImGui::BeginPopupModal("New Project", NULL))
    {
        ImGui::Text("Enter the name for your Project:");
        ImGui::InputText("##", buf, sizeof(buf));

        if (ImGui::IsKeyReleased(ImGuiKey_Enter))
        {
            nfdchar_t* wdPath = NULL;
            nfdresult_t result = NFD_PickFolder(NULL, &wdPath);

            if (result != NFD_OKAY && wdPath != NULL) {
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
                    std::cout << "Project creation failed." << std::endl;
                }
            }
            else if (result == NFD_CANCEL) {
                std::cout << "User canceled the operation." << std::endl;
            }
            else {
                std::cerr << "Error: " << NFD_GetError() << std::endl;
            }
        }

        if (ImGui::Button("Close"))
        {
            ImGui::CloseCurrentPopup();
        }

        ImGui::EndPopup();
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


    f_MainMenu git;
    git_window();

    ImGui::End();
    return 0;
}

int f_MainMenu::entryPoint()
{
    sf::VideoMode autoSize = sf::VideoMode::getDesktopMode();

    sf::RenderWindow window(autoSize, "Menu");
    window.setFramerateLimit(60);

    sf::RenderWindow window(autoSize, "Menu", sf::Style::Default);
    window.setVerticalSyncEnabled(true); // Enable vertical sync

    ImGui::SFML::Init(window);

    f_MainMenu mainMenu;

    sf::Clock deltaClock;
    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(event);

            if (event.type == sf::Event::Closed) {

        while (const std::optional<sf::Event> event = window.pollEvent())
        {
            ImGui::SFML::ProcessEvent(window, *event);

            if (event->is<sf::Event::Closed>()) 
            {
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
