#include "git_panel.h"
#include "GitLogger.h"
#include <imgui.h>
#include <string>
#include <vector>
#include <filesystem>
#include <iostream>
#include <git2.h>

namespace fs = std::filesystem;

// Static member variables initialization
bool Git::show_git_panel = false;
char Git::dir_path[256] = "";
char Git::template_path[256] = "";
char Git::gitdir_path[256] = "";
char Git::remote_url[256] = "";  // NEW
bool Git::quiet = false;
bool Git::bare = false;
bool Git::initial_commit = false;
bool Git::set_origin = false;     // NEW
int Git::shared_mode = 0;
char Git::custom_shared[8] = "0775";
char Git::user_name[128] = "";    // NEW
char Git::user_email[128] = "";   // NEW
Git::InitResult Git::last_result = {false, ""};

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

    // NEW: Set origin checkbox and URL input
    ImGui::Checkbox("Set remote origin", &set_origin);
    if (set_origin) {
        ImGui::Indent();
        ImGui::Text("Remote URL:");
        ImGui::InputText("##remote", remote_url, sizeof(remote_url));
        ImGui::Unindent();
    }

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

    // NEW: Git User Information section
    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Spacing();
    ImGui::Text("Git User Information (for commits):");

    // Fetch button to get existing git config
    if (ImGui::Button("Fetch Existing Git Config")) {
        fetch_existing_user_info();
    }
    ImGui::SameLine();
    if (ImGui::Button("Clear")) {
        strcpy(user_name, "");
        strcpy(user_email, "");
    }

    ImGui::Text("Name:");
    ImGui::InputText("##username", user_name, sizeof(user_name));
    ImGui::Text("Email:");
    ImGui::InputText("##useremail", user_email, sizeof(user_email));

    // Shared repository mode
    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Spacing();
    ImGui::Text("Shared Repository Permissions:");
    const char* shared_items[] = { "umask (default)", "group", "all/everybody", "custom octal" };
    ImGui::Combo("##shared", &shared_mode, shared_items, IM_ARRAYSIZE(shared_items));

    if (shared_mode == 3) {
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
    if (initial_commit) {
        can_initialize = can_initialize && (strlen(user_name) > 0 && strlen(user_email) > 0);
    }
    if (set_origin) {
        can_initialize = can_initialize && (strlen(remote_url) > 0);
    }

    if (!can_initialize) {
        ImGui::BeginDisabled();
    }

    if (ImGui::Button("Initialize Repository", ImVec2(200, 40))) {
        initialize_repository();
    }

    if (!can_initialize) {
        ImGui::EndDisabled();
        if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
            ImGui::SetTooltip("Please fill all required fields");
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

    // Log the git init command
    std::string gitCommand = "git init";
    if (bare) gitCommand += " --bare";
    if (strlen(template_path) > 0) {
        gitCommand += " --template=\"" + std::string(template_path) + "\"";
    }
    if (strlen(gitdir_path) > 0) {
        gitCommand += " --separate-git-dir=\"" + std::string(gitdir_path) + "\"";
    }
    gitCommand += " \"" + std::string(dir_path) + "\"";

    GitLogger::LogGitCommand(gitCommand);

    try {
        // Initialize libgit2
        GitLogger::LogGitOutput("Initializing libgit2...");
        git_libgit2_init();

        git_repository *repo = nullptr;
        git_repository_init_options opts = GIT_REPOSITORY_INIT_OPTIONS_INIT;

        // Set options based on GUI selections
        if (bare) {
            opts.flags |= GIT_REPOSITORY_INIT_BARE;
            GitLogger::LogGitOutput("Creating bare repository...");
        }

        // Set shared permissions
        if (shared_mode == 1) {
            opts.mode = GIT_REPOSITORY_INIT_SHARED_GROUP;
            GitLogger::LogGitOutput("Setting shared mode: group");
        } else if (shared_mode == 2) {
            opts.mode = GIT_REPOSITORY_INIT_SHARED_ALL;
            GitLogger::LogGitOutput("Setting shared mode: all");
        } else if (shared_mode == 3) {
            char *endptr;
            long mode = strtol(custom_shared, &endptr, 8);
            if (*endptr == '\0') {
                opts.mode = mode;
                GitLogger::LogGitOutput("Setting shared mode: custom " + std::string(custom_shared));
            }
        }

        // Set template if specified
        if (strlen(template_path) > 0) {
            opts.template_path = template_path;
            GitLogger::LogGitOutput("Using template directory: " + std::string(template_path));
        }

        // Initialize repository
        GitLogger::LogGitOutput("Creating repository in: " + std::string(dir_path));
        int result = git_repository_init_ext(&repo, dir_path, &opts);

        if (result == 0) {
            std::string message = "✓ Initialized ";
            if (bare) message += "bare ";
            message += "Git repository in ";
            message += dir_path;

            GitLogger::LogGitOutput(message);

            // Create initial commit if requested
            if (initial_commit) {
                GitLogger::LogGitCommand("git commit --allow-empty -m \"Initial commit\"");
                if (create_initial_commit(repo)) {
                    GitLogger::LogGitOutput("✓ Created empty initial commit");
                    message += "\nCreated empty initial commit";
                } else {
                    GitLogger::LogGitOutput("⚠ Warning: Failed to create initial commit");
                    message += "\nWarning: Failed to create initial commit";
                }
            }

            // Set remote origin if requested
            if (set_origin && strlen(remote_url) > 0) {
                std::string remoteCmd = "git remote add origin " + std::string(remote_url);
                GitLogger::LogGitCommand(remoteCmd);
                if (set_remote_origin(repo, remote_url)) {
                    GitLogger::LogGitOutput("✓ Set remote origin to: " + std::string(remote_url));
                    message += "\nSet remote origin to: " + std::string(remote_url);
                } else {
                    GitLogger::LogGitOutput("⚠ Warning: Failed to set remote origin");
                    message += "\nWarning: Failed to set remote origin";
                }
            }

            last_result = {true, message};

            // Clean up
            git_repository_free(repo);
        } else {
            const git_error *e = git_error_last();
            std::string errorMsg = "Failed to initialize repository: " +
            std::string(e ? e->message : "Unknown error");
            GitLogger::LogGitError(errorMsg);
            last_result = {false, errorMsg};
        }

        git_libgit2_shutdown();
        GitLogger::LogGitOutput("✓ Git operation completed");

    } catch (const std::exception& e) {
        std::string errorMsg = "Exception: " + std::string(e.what());
        GitLogger::LogGitError(errorMsg);
        last_result = {false, errorMsg};
    } catch (...) {
        GitLogger::LogGitError("Unknown error occurred");
        last_result = {false, "Unknown error occurred"};
    }
}


bool Git::create_initial_commit(git_repository *repo) {
    git_signature *sig = nullptr;
    git_index *index = nullptr;
    git_tree *tree = nullptr;
    git_oid tree_id, commit_id;
    int error = 0;

    // Use provided user info or fall back to global git config
    std::string name = strlen(user_name) > 0 ? user_name : "User";
    std::string email = strlen(user_email) > 0 ? user_email : "user@example.com";

    // Create signature with user info
    error = git_signature_now(&sig, name.c_str(), email.c_str());
    if (error < 0) {
        std::cerr << "Error creating signature: " << git_error_last()->message << std::endl;
        return false;
    }

    // Add logging
    GitLogger::LogGitOutput("Creating commit signature for: " + name + " <" + email + ">");

    // Get repository index
    error = git_repository_index(&index, repo);
    if (error < 0) {
        std::cerr << "Error getting repository index: " << git_error_last()->message << std::endl;
        git_signature_free(sig);
        return false;
    }

    // Write the index as a tree
    error = git_index_write_tree(&tree_id, index);
    if (error < 0) {
        std::cerr << "Error writing tree: " << git_error_last()->message << std::endl;
        git_index_free(index);
        git_signature_free(sig);
        return false;
    }

    git_index_write(index);

    // Get the tree
    error = git_tree_lookup(&tree, repo, &tree_id);
    if (error < 0) {
        std::cerr << "Error looking up tree: " << git_error_last()->message << std::endl;
        git_index_free(index);
        git_signature_free(sig);
        return false;
    }

    // Create commit
    error = git_commit_create_v(
        &commit_id, repo, "HEAD", sig, sig,
        NULL, "Initial commit", tree, 0);

    if (error < 0) {
        std::cerr << "Error creating commit: " << git_error_last()->message << std::endl;
    }

    // Clean up
    git_tree_free(tree);
    git_index_free(index);
    git_signature_free(sig);

    if (error == 0) {
        GitLogger::LogGitOutput("Successfully created commit with ID: " +
        std::string(git_oid_tostr_s(&commit_id)));
    }

    return error == 0;
}

bool Git::set_remote_origin(git_repository *repo, const std::string &url) {
    git_remote *remote = nullptr;
    int error = 0;

    // Delete existing origin if it exists
    git_remote_delete(repo, "origin");
    GitLogger::LogGitOutput("Removed existing 'origin' remote (if any)");

    // Create new origin remote
    error = git_remote_create(&remote, repo, "origin", url.c_str());

    if (error == 0) {
        // Optionally, we could fetch from the remote here
        git_remote_free(remote);
        return true;
    } else {
        const git_error* e = git_error_last();
        GitLogger::LogGitError("Failed to set remote: " + std::string(e ? e->message : "Unknown error"));
        return false;
    }
}

Git::UserInfo Git::get_git_user_info() {
    UserInfo info;
    git_config *cfg = nullptr;

    // Initialize libgit2 just for config reading
    git_libgit2_init();

    // Open the global git configuration
    int error = git_config_open_default(&cfg);

    if (error == 0) {
        // Get user.name
        const char *name = nullptr;
        error = git_config_get_string(&name, cfg, "user.name");
        if (error == 0 && name != nullptr) {
            info.name = name;
        }

        // Get user.email
        const char *email = nullptr;
        error = git_config_get_string(&email, cfg, "user.email");
        if (error == 0 && email != nullptr) {
            info.email = email;
        }

        git_config_free(cfg);
    }

    git_libgit2_shutdown();
    return info;
}

void Git::fetch_existing_user_info() {
    UserInfo info = get_git_user_info();

    if (!info.name.empty()) {
        strncpy(user_name, info.name.c_str(), sizeof(user_name) - 1);
        user_name[sizeof(user_name) - 1] = '\0';
    }

    if (!info.email.empty()) {
        strncpy(user_email, info.email.c_str(), sizeof(user_email) - 1);
        user_email[sizeof(user_email) - 1] = '\0';
    }
}

void Git::show() {
    show_git_panel = true;
    // Reset form
    strcpy(dir_path, "");
    strcpy(template_path, "");
    strcpy(gitdir_path, "");
    strcpy(remote_url, "");  // NEW
    quiet = false;
    bare = false;
    initial_commit = false;
    set_origin = false;       // NEW
    shared_mode = 0;
    strcpy(custom_shared, "0775");
    last_result = {false, ""};

    // NEW: Try to fetch existing git config automatically
    fetch_existing_user_info();
}
