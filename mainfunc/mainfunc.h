#pragma once
#include "imgui.h"
#include "imgui-SFML.h"
#include "SFML/Graphics.hpp"
#include "nfd.h"
#include "../colorText/TextEditor.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <variant>
#include <iterator>
#include <iomanip>
#include <map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class multiPurp
{
public:
    static char buf[2048]; // Declaration of buf as a static member variable
    //static char ftcbuf[256];
    //static char buildDir[256];
    //static char exeName[256];
    nfdchar_t* outPathBuf; // Define outPathBuf as a member variable
    nfdchar_t* settingsBuf; // Define settingsBuf as a member variable
    nfdchar_t* buildPath;
    nfdchar_t* projPath = nullptr;

    multiPurp() : outPathBuf(NULL) {} // Initialize outPathBuf to nullptr in the constructor

    void Compilefunc();
    void mainEditor(TextEditor& editor); // Declaration only
    void loadFont();
    int menuBarfunc(TextEditor& editor);

    void gitSC();
    //static void Debug();

private:
    sf::Texture fontText;
};