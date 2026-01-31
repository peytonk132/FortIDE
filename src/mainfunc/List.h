#include <tinyxml2.h>
#include <SFML/Graphics.hpp>
#include <boost/filesystem.hpp>
#include <boost/process.hpp>
#include <imgui.h>
#include <imgui-SFML.h>
#include "../../deps/portable-file-dialogs/portable-file-dialogs.h"
#include "f_MainMenu.h"
#include <chrono>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <ctime>

namespace fs = std::filesystem;
using namespace tinyxml2;

struct Project {
    std::string name;
    std::string directory;
    std::string created;
};

std::vector<Project> projects;

std::string getConfigPath() {
    const char* homeDir = nullptr;

    // Get home directory (works on Unix-like systems)
    homeDir = getenv("HOME");
    if (!homeDir) {
        // For Windows
        homeDir = getenv("USERPROFILE");
    }
    if (!homeDir) {
        homeDir = ".";
    }

    return std::string(homeDir) + "/.config/FortIDE/projects.xml";
}

std::string getConfigDir() {
    const char* homeDir = getenv("HOME");
    if (!homeDir) {
        homeDir = getenv("USERPROFILE");
    }
    if (!homeDir) {
        homeDir = ".";
    }

    return std::string(homeDir) + "/.config/FortIDE";
}

// Get current timestamp in ISO 8601 format
std::string currentDateTime() {
    auto now = std::chrono::system_clock::now();
    auto in_time_t = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%dT%H:%M:%S");
    return ss.str();
}

void createProjects(char* name) {
    std::string projectTitle(name);
    std::string title = "fpm new " + projectTitle;
    boost::process::system(title);
    
}

void saveProjects() {
    // Get the config directory
    std::string configDir = getConfigDir();
    std::string xmlPath = getConfigPath();

    // Create the directory if it doesn't exist
    try {
        if (!fs::exists(configDir)) {
            fs::create_directories(configDir);
            std::cout << "Created directory: " << configDir << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error creating directory: " << e.what() << std::endl;
    }

    XMLDocument doc;
    doc.InsertEndChild(doc.NewDeclaration());

    XMLElement* root = doc.NewElement("Projects");
    doc.InsertEndChild(root);

    for (const auto& project : projects) {
        XMLElement* projElement = doc.NewElement("Project");
        projElement->SetAttribute("name", project.name.c_str());
        projElement->SetAttribute("created", project.created.c_str());

        XMLElement* dirElement = doc.NewElement("Directory");
        dirElement->SetText(project.directory.c_str());
        projElement->InsertEndChild(dirElement);

        root->InsertEndChild(projElement);
    }

    // Save to the expanded path
    if (doc.SaveFile(xmlPath.c_str()) != XML_SUCCESS) {
        std::cerr << "Error saving projects to: " << xmlPath << std::endl;
    }
}

void loadProjects() {
    projects.clear();

    std::string xmlPath = getConfigPath();

    XMLDocument doc;
    if (doc.LoadFile(xmlPath.c_str())) {
        // File doesn't exist or error - this is expected on first run
        std::cout << "No existing projects file found at: " << xmlPath << std::endl;
        return;
    }

    XMLElement* root = doc.FirstChildElement("Projects");
    if (!root) return;

    for (XMLElement* proj = root->FirstChildElement("Project");
         proj;
    proj = proj->NextSiblingElement())
         {
             Project project;
             project.name = proj->Attribute("name");
             project.created = proj->Attribute("created");

             if (XMLElement* dir = proj->FirstChildElement("Directory")) {
                 project.directory = dir->GetText() ? dir->GetText() : "";
             }

             projects.push_back(project);
         }
}

// Global state for UI
char newProjectName[256] = "";
char newProjectDir[1024] = "";
bool showAddProject = false;

void renderProjectManager(sf::RenderWindow& window) {
    ImGui::Begin("Project Manager", nullptr, ImGuiWindowFlags_AlwaysAutoResize);

    // Add Project Button
    if (ImGui::Button("Add New Project")) {
        showAddProject = true;
        memset(newProjectName, 0, sizeof(newProjectName));
        memset(newProjectDir, 0, sizeof(newProjectDir));
    }

    // Project List
    ImGui::Separator();
    ImGui::Text("Projects");
    ImGui::BeginChild("ProjectList", ImVec2(600, 400), true);

    for (size_t i = 0; i < projects.size(); i++) {
        ImGui::PushID(static_cast<int>(i));

        // Project entry
        ImGui::Text("%s", projects[i].name.c_str());
        ImGui::SameLine(300);
        ImGui::TextDisabled("%s", projects[i].created.c_str());
        ImGui::SameLine(450);
        if (ImGui::Button("Delete")) {
            projects.erase(projects.begin() + i);
            saveProjects();
            ImGui::PopID();
            
            break;
        }
        ImGui::SameLine(550);
        if (ImGui::Button("Open")) {
            boost::filesystem::current_path(newProjectDir);
            printf("filesystem changed.");
            ImGui::PopID();
            break;
        }

        

        // Directory info
        ImGui::TextColored(ImVec4(0.8f, 0.8f, 0.8f, 1.0f), "Location: %s",
                           projects[i].directory.c_str());

        ImGui::Separator();
        ImGui::PopID();
    }

    ImGui::EndChild();
    ImGui::End();

    // Add Project Modal
    if (showAddProject) {
        ImGui::OpenPopup("Add Project");
        showAddProject = false;
    }

    if (ImGui::BeginPopupModal("Add Project", nullptr, ImGuiWindowFlags_AlwaysAutoResize)) {
        ImGui::InputText("Project Name", newProjectName, sizeof(newProjectName));

        ImGui::InputText("Directory", newProjectDir, sizeof(newProjectDir));
        ImGui::SameLine();
        if (ImGui::Button("Browse")) {
            auto opPath = pfd::select_folder("Select a file directory", "").result();

                
            strcpy(newProjectDir, opPath.c_str());
        }

        if (ImGui::Button("Create")) 
        {
            if (strlen(newProjectName) > 0 && strlen(newProjectDir) > 0) 
            {
                projects.push_back(
                    {
                    newProjectName,
                    newProjectDir,
                    currentDateTime()
                });
                boost::filesystem::current_path(newProjectDir);
                createProjects(newProjectName);
                saveProjects();
                ImGui::CloseCurrentPopup();
            }
        }

        ImGui::SameLine();
        if (ImGui::Button("Cancel")) {
            ImGui::CloseCurrentPopup();
        }

        ImGui::EndPopup();
    }
}
