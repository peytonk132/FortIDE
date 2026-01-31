#pragma once
#include <git2.h>
#include <imgui.h>
#include <string>
#include <vector>

class Git {
public:
    struct InitResult {
        bool success;
        std::string message;
    };

    struct UserInfo {
        std::string name;
        std::string email;
    };

    static void git_panel();
    static void show();

private:
    static void initialize_repository();
    static bool create_initial_commit(git_repository *repo);
    static bool set_remote_origin(git_repository *repo, const std::string &url);
    static UserInfo get_git_user_info();
    static void fetch_existing_user_info();

    // GUI state
    static bool show_git_panel;
    static char dir_path[256];
    static char template_path[256];
    static char gitdir_path[256];
    static char remote_url[256];  // NEW: For setting remote origin
    static bool quiet;
    static bool bare;
    static bool initial_commit;
    static bool set_origin;        // NEW: Checkbox for setting origin
    static int shared_mode; // 0 = umask, 1 = group, 2 = all, 3 = custom octal
    static char custom_shared[8];

    // User info from git config
    static char user_name[128];    // NEW: User name from git config
    static char user_email[128];   // NEW: Email from git config

    static InitResult last_result;
};
