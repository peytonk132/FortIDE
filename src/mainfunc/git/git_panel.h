#pragma once
#include <git2.h>
#include <imgui.h>
#include <string>

class Git {
public:
    struct InitResult {
        bool success;
        std::string message;
    };

    static void git_panel();
    static void show();

private:
    static void initialize_repository();
    static void create_initial_commit(git_repository *repo);

    // GUI state
    static bool show_git_panel;
    static char dir_path[256];
    static char template_path[256];
    static char gitdir_path[256];
    static bool quiet;
    static bool bare;
    static bool initial_commit;
    static int shared_mode; // 0 = umask, 1 = group, 2 = all, 3 = custom octal
    static char custom_shared[8];
    static InitResult last_result;
};
