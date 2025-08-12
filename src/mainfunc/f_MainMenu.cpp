#include "f_MainMenu.h"

#include <git2.h>
#include <fstream>
#include <SFML/Graphics.hpp>
#include <imgui.h>
#include <imgui-SFML.h>
#include <boost/filesystem.hpp>
#include <boost/process.hpp>
#include <iostream>
#include "../../deps/portable-file-dialogs/portable-file-dialogs.h"
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

// Struct to store cloning progress
struct progress_data {
    int received_objects;
    int total_objects;
    int indexed_objects;
    bool cloning_complete = false;
};

// Declare variables to manage threading
std::atomic<bool> isRepoPickerRunning = false;
std::thread repoPickerThread;
progress_data cloneProgress = { 0, 0, 0, false };

int fetch_progress(const git_indexer_progress* stats, void* payload) {
    progress_data* pd = (progress_data*)payload;
    pd->received_objects = stats->received_objects;
    pd->total_objects = stats->total_objects;
    pd->indexed_objects = stats->indexed_objects;
    return 0; // Return 0 to continue, or a non-zero value to cancel the clone
}

void checkout_progress(const char* path, size_t cur, size_t tot, void* payload) {
    progress_data* pd = (progress_data*)payload;
    // Optionally store this info for detailed GUI feedback
}

int repoPathPicker() 
{
    auto result = pfd::select_folder("Select a directory", pfd::path::home()).result();
    if (!result.empty()) {
        boost::filesystem::current_path(result);
        repoPath = result;
        std::cout << "Selected path: " << result << std::endl;
    } else {
        std::cout << "User canceled the operation." << std::endl;
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

    // Set up progress data
    cloneProgress = { 0, 0, 0, false };

    git_repository* repo = nullptr;
    git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;
    clone_opts.fetch_opts.callbacks.transfer_progress = fetch_progress;
    clone_opts.fetch_opts.callbacks.payload = &cloneProgress;
    clone_opts.checkout_opts.checkout_strategy = GIT_CHECKOUT_SAFE;
    clone_opts.checkout_opts.progress_cb = checkout_progress;
    clone_opts.checkout_opts.progress_payload = &cloneProgress;

    // Perform the clone operation
    int error = git_clone(&repo, url.c_str(), path.c_str(), &clone_opts);
    cloneProgress.cloning_complete = (error == 0);

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

int git_window() 
{
    if (ImGui::Button("Clone A Repo")) 
    {
        ImGui::OpenPopup("Git_Control");
    }

    if (ImGui::BeginPopup("Git_Control")) 
    {
        ImGui::Begin("Clone");
        ImGui::Text("URL: ");
        ImGui::SameLine();
        ImGui::InputText("Repo Url", repoUrl, sizeof(repoUrl));

        ImGui::Text("PATH: ");
        ImGui::SameLine();
        if (ImGui::InputText("Local Path", repoPathBuf, sizeof(repoPathBuf))) 
        {
            repoPath = repoPathBuf;  // Sync repoPath with updated buffer
        }
        ImGui::SameLine();

        if (ImGui::Button("...")) 
        {
            startRepoPathPicker(); // Start `repoPathPicker` in a new thread
        }

        if (isRepoPickerRunning) {
            ImGui::Text("Loading path picker..."); // Display loading message
        }
        else if (ImGui::Button("Clone")) 
        {
            // Launch the cloning in a new thread to avoid UI blocking
            std::thread cloneThread([&]() 
            {
                cloneSuccess = cloneRepository(repoUrl, repoPath);
            });
            cloneThread.detach();
        }

        if (cloneProgress.total_objects > 0) 
        {
            float progress = (float)cloneProgress.received_objects / cloneProgress.total_objects;
            ImGui::Text("Cloning repository...");
            ImGui::ProgressBar(progress, ImVec2(0.0f, 0.0f));
            ImGui::Text("Received objects: %d/%d", cloneProgress.received_objects, cloneProgress.total_objects);
            ImGui::Text("Indexed objects: %d", cloneProgress.indexed_objects);
            if (cloneProgress.cloning_complete) 
            {
                ImGui::Text("Clone completed successfully!");
            }
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
    /*
    // Update ImGui DisplaySize
    ImGuiIO& io = ImGui::GetIO();
    io.DisplaySize = ImVec2(static_cast<float>(sizeX), static_cast<float>(sizeY));

    // Validate DisplaySize
    if (io.DisplaySize.x <= 0.0f || io.DisplaySize.y <= 0.0f) {
        std::cerr << "Invalid DisplaySize: (" << io.DisplaySize.x << ", " << io.DisplaySize.y << ")\n";
        return -1; // Skip rendering
    }*/

    ImVec2 fixedfieldPos = ImVec2(850, 0);
    ImVec2 sizedWidget = ImVec2(500, sizeY);
    ImGui::SetNextWindowPos(fixedfieldPos);
    ImGui::SetNextWindowSize(sizedWidget);

    ImGui::Begin("SomethingUniqueq", 0, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar);

    if (ImGui::Button("New Project", ImVec2(200, 100))) 
    {
        ImGui::OpenPopup("New Project");
    }

    if (ImGui::BeginPopupModal("New Project", 0)) 
    {
        ImGui::Text("Enter the name for your Project:");
        ImGui::InputText("##", buf, sizeof(buf));

        if (ImGui::IsKeyReleased(ImGuiKey_Enter)) 
        {
            auto wdPath = pfd::select_folder("Select project directory", pfd::path::home()).result();

            if (!wdPath.empty()) 
            {
                boost::filesystem::current_path(wdPath);
                std::cout << "Current Working Directory: " << boost::filesystem::current_path().string() << std::endl;

                if (f_genNewProject() == 0) 
                {
                    std::cout << "Project created successfully in directory: " << boost::filesystem::current_path().string() << std::endl;
                    boost::filesystem::current_path(buf);
                    std::cout << "New path: " << boost::filesystem::current_path().string() << std::endl;
                    std::ofstream cfgFile("Config.xml");
                } else 
                {
                    std::cout << "Project creation failed." << std::endl;
                }
            } else 
            {
                std::cout << "User canceled the operation." << std::endl;
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
        auto opPath = pfd::select_folder("Select a project directory", "").result();

        if (!opPath.empty()) 
        {
            boost::filesystem::current_path(opPath);
            std::cout << "Current Working Directory: " << boost::filesystem::current_path().string() << std::endl;
        } else 
        {
            std::cout << "No directory selected!" << std::endl;
        }
    }

    git_window();
    ImGui::End();

    return 0;
}

int f_MainMenu::entryPoint()
{
    
    sf::VideoMode autoSize = sf::VideoMode::getDesktopMode();

    sf::RenderWindow window(autoSize, "Menu", sf::Style::Default);
    window.setVerticalSyncEnabled(true); // Enable vertical sync

    ImGui::SFML::Init(window);

    f_MainMenu mainMenu;

    sf::Clock deltaClock;
    while (window.isOpen()) {
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
        //ImGui::NewFrame();
        mainMenu.startMenu();
        //ImGui::Render();
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
    return 0;
}
