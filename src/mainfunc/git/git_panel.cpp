#include "git_panel.h"
#include <imgui.h>
#include <string>
#include <vector>
#include <filesystem>
#include <iostream>
#include "git_common.h"

namespace fs = std::filesystem;

// Static member variables initialization
bool Git::show_git_panel = false;
char Git::dir_path[256] = "";
char Git::template_path[256] = "";
char Git::gitdir_path[256] = "";
bool Git::quiet = false;
bool Git::bare = false;
bool Git::initial_commit = false;
int Git::shared_mode = 0; // 0 = umask, 1 = group, 2 = all, 3 = custom octal
char Git::custom_shared[8] = "0775";
Git::InitResult Git::last_result = {false, ""};

// Declare the C function from common.c
/*
extern "C" {
    int lg2_init_fi(git_repository *repo, int argc, char *argv[]);
}*/

void Git::git_panel() {
    if (!show_git_panel) return;

    ImGui::Begin("Git Repository Initialization", &show_git_panel,
                 ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoCollapse);

    // Directory input
    ImGui::Text("Directory to initialize:");
    ImGui::InputText("##dir", dir_path, sizeof(dir_path));
    ImGui::SameLine();
    if (ImGui::Button("Browse##dir")) {
        // Note: You would need to integrate a file dialog here
        // For now, we'll just show a placeholder
        std::cout << "Browse directory dialog would open here\n";
    }

    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Spacing();

    // Options
    ImGui::Checkbox("Quiet (suppress output)", &quiet);
    ImGui::Checkbox("Bare repository", &bare);
    ImGui::Checkbox("Create initial commit", &initial_commit);

    // Template directory
    ImGui::Spacing();
    ImGui::Text("Template Directory (optional):");
    ImGui::InputText("##template", template_path, sizeof(template_path));
    ImGui::SameLine();
    if (ImGui::Button("Browse##template")) {
        std::cout << "Browse template dialog would open here\n";
    }

    // Separate git directory
    ImGui::Spacing();
    ImGui::Text("Separate Git Directory (optional):");
    ImGui::InputText("##gitdir", gitdir_path, sizeof(gitdir_path));
    ImGui::SameLine();
    if (ImGui::Button("Browse##gitdir")) {
        std::cout << "Browse gitdir dialog would open here\n";
    }
    if (ImGui::IsItemHovered()) {
        ImGui::SetTooltip("If specified, the repository directory will be created here\nand a gitlink file will be created at the working directory");
    }

    // Shared repository mode
    ImGui::Spacing();
    ImGui::Text("Shared Repository Permissions:");
    const char* shared_items[] = { "umask (default)", "group", "all/everybody", "custom octal" };
    ImGui::Combo("##shared", &shared_mode, shared_items, IM_ARRAYSIZE(shared_items));

    if (shared_mode == 3) { // Custom octal
        ImGui::SameLine();
        ImGui::SetNextItemWidth(60);
        ImGui::InputText("##custom_shared", custom_shared, sizeof(custom_shared));
        if (ImGui::IsItemHovered()) {
            ImGui::SetTooltip("Enter octal value (e.g., 0660, 0775)");
        }
    }

    // Initialize button
    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Spacing();

    bool can_initialize = strlen(dir_path) > 0;

    if (!can_initialize) {
        ImGui::BeginDisabled();
    }

    if (ImGui::Button("Initialize Repository", ImVec2(200, 40))) {
        initialize_repository();
    }

    if (!can_initialize) {
        ImGui::EndDisabled();
        if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
            ImGui::SetTooltip("Please specify a directory to initialize");
        }
    }

    // Show result message
    if (last_result.success) {
        ImGui::Spacing();
        ImGui::TextColored(ImVec4(0.0f, 1.0f, 0.0f, 1.0f), "✓ Success!");
        if (!last_result.message.empty()) {
            ImGui::TextWrapped("%s", last_result.message.c_str());
        }
    } else if (!last_result.message.empty()) {
        ImGui::Spacing();
        ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f), "✗ Error:");
        ImGui::TextWrapped("%s", last_result.message.c_str());
    }

    ImGui::End();
}


void Git::initialize_repository() {
    // Clear previous result
    last_result = {false, ""};

    try {
        // Initialize libgit2 (should be done once at app startup)
        git_libgit2_init();

        git_repository *repo = nullptr;
        git_repository_init_options opts = GIT_REPOSITORY_INIT_OPTIONS_INIT;

        // Set options based on GUI selections
        if (bare) opts.flags |= GIT_REPOSITORY_INIT_BARE;

        // Set shared permissions
        if (shared_mode == 1) {
            opts.mode = GIT_REPOSITORY_INIT_SHARED_GROUP;
        } else if (shared_mode == 2) {
            opts.mode = GIT_REPOSITORY_INIT_SHARED_ALL;
        } else if (shared_mode == 3) {
            // Parse custom octal
            char *endptr;
            long mode = strtol(custom_shared, &endptr, 8);
            if (*endptr == '\0') {
                opts.mode = mode;
            }
        }

        // Set template if specified
        if (strlen(template_path) > 0) {
            opts.template_path = template_path;
        }

        // Initialize repository
        int result = git_repository_init_ext(&repo, dir_path, &opts);

        if (result == 0) {
            // Handle separate git directory
            if (strlen(gitdir_path) > 0) {
                // This requires additional handling with git_repository_set_workdir
                // or using git_repository_init_ext with different flags
            }

            // Create initial commit if requested
            if (initial_commit) {
                create_initial_commit(repo);
            }

            std::string message = "Initialized ";
            if (bare) message += "bare ";
            message += "Git repository in ";
            message += dir_path;

            if (initial_commit) {
                message += "\nCreated empty initial commit";
            }

            last_result = {true, message};

            // Clean up
            git_repository_free(repo);
        } else {
            const git_error *e = git_error_last();
            last_result = {false, std::string("Failed to initialize repository: ") +
                (e ? e->message : "Unknown error")};
        }

        // Shutdown libgit2 (or do this at app shutdown)
        git_libgit2_shutdown();

    } catch (const std::exception& e) {
        last_result = {false, std::string("Error: ") + e.what()};
    } catch (...) {
        last_result = {false, "Unknown error occurred"};
    }
}

void Git::create_initial_commit(git_repository *repo) {
    git_signature *sig = nullptr;
    git_index *index = nullptr;
    git_tree *tree = nullptr;
    git_oid tree_id, commit_id;

    // Create signature
    git_signature_now(&sig, "User", "user@example.com");

    // Get repository index
    git_repository_index(&index, repo);

    // Write the index as a tree
    git_index_write_tree(&tree_id, index);
    git_index_write(index);

    // Get the tree
    git_tree_lookup(&tree, repo, &tree_id);

    // Create commit
    git_commit_create_v(
        &commit_id, repo, "HEAD", sig, sig,
        NULL, "Initial commit", tree, 0);

    // Clean up
    git_tree_free(tree);
    git_index_free(index);
    git_signature_free(sig);
}

void Git::show() {
    show_git_panel = true;
    // Reset form
    strcpy(dir_path, "");
    strcpy(template_path, "");
    strcpy(gitdir_path, "");
    quiet = false;
    bare = false;
    initial_commit = false;
    shared_mode = 0;
    strcpy(custom_shared, "0775");
    last_result = {false, ""};
}
