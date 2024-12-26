#pragma once
#include <imgui.h>
#include <imgui-SFML.h>
#include <portable-file-dialogs.h>
#include <TextEditor.h>
#include <git2.h>
#include <string>
#include <vector>

class multiPurp
{
public:
    static char buf[2048]; // Declaration of buf as a static member variable

    multiPurp() = default; // Use default constructor

    // Function for file path management
    std::string chooseFilePath();                         // Opens a file dialog and returns the selected file path
    bool createFile(const std::string& filePath);         // Creates a new file at the given path
    std::string readFileContent(const std::string& filePath); // Reads content from a file
    bool saveToFile(const std::string& content);                                    // Opens a save dialog and saves content to a file

    void Compilefunc();                                   // Compile functionality
    void loadFont();                                      // Load font
    int menuBarfunc(TextEditor& editor);                  // Menu bar functionality
    int commitChanges(git_repository* repo, const std::string& commitMessage); // Commit changes to Git
    bool pushChanges(git_repository* repo);               // Push changes to Git
    void OpenGitControl();                                // Open Git control window
    std::wstring Utf8ToWstring(const std::string& str);   // Convert UTF-8 to wstring

    struct SearchOutput
    {
        std::string word;
        int lineNum;
    };

    std::vector<SearchOutput> findMatches(const std::string& searchWord, const std::string& content);

private:

};