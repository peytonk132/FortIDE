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
            // Implement native folder dialog here
            // For now: use dummy path
            strcpy_s(newProjectDir, "C:/Projects/");
        }

        if (ImGui::Button("Create")) {
            if (strlen(newProjectName) > 0 && strlen(newProjectDir) > 0) {
                projects.push_back({
                    newProjectName,
                    newProjectDir,
                    currentDateTime()
                });
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