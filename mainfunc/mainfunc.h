#pragma once
#include "imgui.h"
#include "imgui-SFML.h"
#include "SFML/Graphics.hpp"
#include "nfd.h"
#include "../colorText/TextEditor.h"
#include <sstream>
#include <git2.h>
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
    // New function for file path management
    std::string chooseFilePath();  // Opens a file dialog and returns the selected file path
    bool createFile(const std::string& filePath);  // Creates a new file at the given path
    std::string readFileContent(const std::string& filePath);  // Reads content from a file
    bool saveToFile(const std::string& filePath, const std::string& content);  // Saves content to a file
    void Compilefunc();
    void mainEditor(TextEditor& editor); // Declaration only
    void loadFont();
    int menuBarfunc(TextEditor& editor);
    int commitChanges(git_repository* repo, const std::string& commitMessage);
    bool pushChanges(git_repository* repo);
    void OpenGitControl();
    struct SearchOutput
    {
        std::string word;
        int lineNum;
    };

    std::vector<SearchOutput> findMatches(const std::string& searchWord, const std::string& content);
    //static void Debug();

private:
    sf::Texture fontText;
};