#pragma once

#include <SFML/Graphics.hpp>
#include <imgui-SFML.h>
#include <imgui.h>
#include <string>
#include <vector>
#include <iostream>
#include "nfd.h"
#include <boost/process.hpp>
#include <boost/filesystem.hpp>
#include <ctime>
#include <iomanip>
#include <chrono>

// Define ProjectSettings structure
struct ProjectSettings {
    std::string title;
    std::string compiler;
    std::vector<std::string> sourceFiles;
};


class f_MainMenu {
public:
    static char buf[256];
    int startMenu();
    static int entryPoint();
    static int f_genNewProject();
    static int stackWindow();
};
