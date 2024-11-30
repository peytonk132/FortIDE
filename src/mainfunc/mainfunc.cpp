#include "mainfunc.h"
#include <boost/process.hpp>
#include <boost/filesystem.hpp>
#include <TextEditor.h>
#include "c_Parser.h"
#include "Config.h"
#include <cstdlib>
#include <string>
#include <fstream>
#include <filesystem>
#include <iostream>
#include <memory>
#include <vector>
#include <chrono>
#include <codecvt>

using namespace std;
namespace bp = boost::process;
namespace fs = boost::filesystem;

int compileRes;
ostringstream oss;
ostringstream setStr;

char multiPurp::buf[2048]{ '\0' };
//char multiPurp::ftcbuf[256]{ '\0' };
//char multiPurp::buildDir[256]{ '\0' };
//char multiPurp::exeName[256]{ '\0' };
// Global or static variables to preserve state across frames
static char repoUrl[128] = "https://github.com/user/repo.git";
static char localPath[128] = "";
static char commitMessage[128] = "Initial commit";
static bool commitSuccess = false;
static bool pushSuccess = false;
static std::string repoPath = "";  // Path to the local repo, can be set dynamically
static char repoPathBuf[256] = ""; // Buffer for InputText
//static std::atomic<int> push_Progress(0);
//static std::atomic<bool> isPushing(false);

// Declare variables to manage threading
std::atomic<bool> _isRepoPickerRunning = false;
std::thread _repoPickerThread;
//push_progress_data pushProgress = { 0, 0, 0, 0, 0, false };

std::unique_ptr<std::istream> fileContent; // Unique pointer to hold the file content

// Highlighting is done by ImGuiColorTextEdit. The repo: https://github.com/BalazsJako/ImGuiColorTextEdit

int _repoPathPicker() {
    nfdchar_t* outPath = NULL;
    nfdresult_t result = NFD_PickFolder(NULL, &outPath);

    if (result == NFD_OKAY) {
        repoPath = outPath;              // Update std::string with selected path
        std::strncpy(repoPathBuf, repoPath.c_str(), sizeof(repoPathBuf) - 1);  // Sync buffer with repoPath
        repoPathBuf[sizeof(repoPathBuf) - 1] = '\0';  // Ensure null-termination
        free(outPath);  // Free memory allocated by NFD
    }

    return 0;
}

// Function to safely start `repoPathPicker` in a new thread
void _startRepoPathPicker() {
    if (_isRepoPickerRunning) return;

    _isRepoPickerRunning = true;

    // Launch repoPathPicker in a new thread
    _repoPickerThread = std::thread([]() {
        _repoPathPicker(); // Call the function
        _isRepoPickerRunning = false; // Reset flag after completion
        });

    // Detach the thread to let it run independently
    _repoPickerThread.detach();
}

std::string multiPurp::chooseFilePath()
{
    nfdchar_t* outPath = NULL;
    nfdresult_t result = NFD_OpenDialog("f90", NULL, &outPath);  // Opens dialog for Fortran files
    if (result == NFD_OKAY)
    {
        std::string filePath(outPath);
        free(outPath);  // Free the path memory
        return filePath;
    }
    else if (result == NFD_CANCEL)
    {
        std::cout << "User canceled the file selection." << std::endl;
        return "";
    }
    else
    {
        std::cerr << "Error: " << NFD_GetError() << std::endl;
        return "";
    }
}

bool multiPurp::createFile(const std::string& filePath)
{
    std::ofstream newFile(filePath);
    if (newFile.is_open())
    {
        newFile.close();
        std::cout << "File created at: " << filePath << std::endl;
        return true;
    }
    else
    {
        std::cerr << "Error creating file at: " << filePath << std::endl;
        return false;
    }
}

std::string multiPurp::readFileContent(const std::string& filePath)
{
    std::ifstream file(filePath);
    if (file.is_open())
    {
        std::string content((std::istreambuf_iterator<char>(file)),
            std::istreambuf_iterator<char>());
        file.close();
        return content;
    }
    else
    {
        std::cerr << "Error reading file: " << filePath << std::endl;
        return "";
    }
}


bool multiPurp::saveToFile() 
{
    return 0;
}

std::vector<multiPurp::SearchOutput> multiPurp::findMatches(const std::string& searchWord, const std::string& content)
{
    std::vector<SearchOutput> matches;
    std::istringstream stream(content);
    std::string line;
    int lineNum = 0;

    while (std::getline(stream, line)) {
        lineNum++;
        size_t pos = line.find(searchWord);
        while (pos != std::string::npos) {
            SearchOutput match;
            match.word = searchWord;
            match.lineNum = lineNum;
            matches.push_back(match);

            pos = line.find(searchWord, pos + searchWord.length()); // Search for next occurrence in the same line
        }
    }

    return matches;
}


int multiPurp::menuBarfunc(TextEditor& editor)
{
    if (ImGui::BeginMainMenuBar())
    {

        static bool showPopup = false;
        static bool saveDialog = false;
        //if (ImGui::IsKeyPressed(ImGuiKey_LeftCtrl) || ImGui::IsKeyPressed(ImGuiKey_RightCtrl) && ImGui::IsKeyPressed(ImGuiKey_S))
        //{
          //  saveDialog = true; // Set flag to open the file dialog
        //}

        // Save button functionality

        if (ImGui::Button("Save"))
        {
           printf("Fuck you, it doesn't work.");
        }




        if (showPopup) {
            ImGui::OpenPopup("Popup");
            showPopup = false;
        }

        multiPurp::Compilefunc();

        OpenGitControl();

        //Terminal term;
        //term.Render();
        ImGui::EndMainMenuBar();
    }

    return 0;
}

int multiPurp::commitChanges(git_repository* repo, const std::string& commitMessage) {
    int error = 0;
    git_oid commit_oid, tree_oid;
    git_index* index = nullptr;
    git_tree* tree = nullptr;
    git_object* parent = nullptr;
    git_reference* ref = nullptr;
    git_signature* author_signature = nullptr;
    git_signature* committer_signature = nullptr;

    // Get the HEAD commit (if it exists)
    error = git_revparse_ext(&parent, &ref, repo, "HEAD");
    if (error == GIT_ENOTFOUND) {
        printf("HEAD not found. Creating first commit\n");
        error = 0;
    }
    else if (error != 0) {
        const git_error* err = git_error_last();
        if (err) printf("ERROR %d: %s\n", err->klass, err->message);
        else printf("ERROR %d: no detailed info\n", error);
        return error;
    }

    // Get the repository index
    if ((error = git_repository_index(&index, repo)) != 0) {
        const git_error* err = git_error_last();
        printf("ERROR %d: %s\n", error, err ? err->message : "Failed to get index");
        return error;
    }

    // Write the index to a tree
    if ((error = git_index_write_tree(&tree_oid, index)) != 0) {
        const git_error* err = git_error_last();
        printf("ERROR %d: %s\n", error, err ? err->message : "Failed to write tree");
        git_index_free(index);
        return error;
    }

    git_index_write(index);
    git_index_free(index);

    // Lookup the tree object
    if ((error = git_tree_lookup(&tree, repo, &tree_oid)) != 0) {
        const git_error* err = git_error_last();
        printf("ERROR %d: %s\n", error, err ? err->message : "Failed to lookup tree");
        return error;
    }

    // Create author and committer signatures
    if ((error = git_signature_default(&author_signature, repo)) != 0) {
        printf("ERROR: Could not create author signature\n");
        git_tree_free(tree);
        return error;
    }
    committer_signature = author_signature;  // Use the same signature for committer

    // Create the commit
    error = git_commit_create_v(
        &commit_oid,
        repo,
        "HEAD",
        author_signature,
        committer_signature,
        NULL,  // UTF-8 encoding
        commitMessage.c_str(),
        tree,
        parent ? 1 : 0,
        parent  // NULL for the first commit
    );

    if (error != 0) {
        const git_error* err = git_error_last();
        printf("ERROR %d: %s\n", error, err ? err->message : "Failed to create commit");
    }
    else {
        printf("Commit created successfully\n");
    }

    // Cleanup
    git_tree_free(tree);
    git_object_free(parent);
    git_signature_free(author_signature);
    git_reference_free(ref);

    return error;
}


bool multiPurp::pushChanges(git_repository* repo) {
    //pushProgress = { 0, 0, 0, 0, 0, false };
    int error;
    git_remote* remote = nullptr;
    git_push_options options = GIT_PUSH_OPTIONS_INIT;
    git_remote_callbacks callbacks = GIT_REMOTE_CALLBACKS_INIT;
    const char* refspec = "refs/heads/main"; // Change this if your default branch is different
    git_strarray refspecs;

    // Initialize refspecs
    refspecs.strings = const_cast<char**>(&refspec);
    refspecs.count = 1;

    // Lookup the remote
    error = git_remote_lookup(&remote, repo, "origin");
    if (error != 0) {
        const git_error* err = git_error_last();
        printf("ERROR %d: %s\n", error, err ? err->message : "Unknown error");
        return false;
    }

    // Set up the callbacks for authentication
    callbacks.credentials = [](git_credential** out, const char* url, const char* username_from_url, unsigned int allowed_types, void* payload) {
        return git_credential_userpass_plaintext_new(out, "peytonk132", ""); // Use your actual token here
        };
    options.callbacks = callbacks;

    // Perform the push
    error = git_remote_push(remote, &refspecs, &options);
    if (error != 0) {
        const git_error* err = git_error_last();
        printf("ERROR %d: %s\n", error, err ? err->message : "Failed to push changes");
        git_remote_free(remote);
        return false;
    }

    printf("Pushed successfully\n");
    git_remote_free(remote);
    //pushProgress = 100;
    //isPushing = false;
    return true;
}


void multiPurp::OpenGitControl()
{
    boost::filesystem::path currentPath = boost::filesystem::current_path();
    std::string pathString = currentPath.string(); // Keep the string in scope
    const char* pathCString = pathString.c_str();  // Use c_str() for const char*


    if (ImGui::Button("Git"))
    {
        ImGui::OpenPopup("Git_Options");
    }

    if (ImGui::BeginPopup("Git_Options"))
    {
        ImGui::Begin("##Placeholder");

        // Commit Section
        if (ImGui::CollapsingHeader("Commit Latest"))
        {
            ImGui::InputText("Commit Message", commitMessage, sizeof(commitMessage));
            if (ImGui::Button("Commit"))
            {
                // Ensure you pass a valid git_repository pointer here
                git_repository* repo = nullptr;
                // Initialize repo with your project repository path
                git_repository_open(&repo, pathCString);
                
                multiPurp::commitChanges(repo, commitMessage);
                git_repository_free(repo);
            }
        }

        // Push Section
        if (ImGui::CollapsingHeader("Push Changes"))
        {
            if (ImGui::Button("Push"))
            {
                // Ensure you pass a valid git_repository pointer here
                git_repository* repo = nullptr;
                // Initialize repo with your project repository path
                git_repository_open(&repo, pathCString);
                
                if (multiPurp::pushChanges(repo))
                {
                    printf("Push Successful");
                }
                else
                {
                    printf("Push failed\n");
                }
                git_repository_free(repo);
            }
        }

        ImGui::End();
        ImGui::EndPopup();
    }
}




void multiPurp::Compilefunc()
{
    if (ImGui::Button("Build Options"))
    {
        ImGui::OpenPopup("Build Options");
    }
    if (ImGui::BeginPopup("Build Options"))
    {
        if (ImGui::Button("Build"))
        {
            try {
                std::stringstream ss;
                ss << Config::buildCom;
                std::string command = ss.str();
                bp::system(command);
                ImGui::Text("Build command executed successfully.");
            }
            catch (const std::exception& e) {
                ImGui::Text("Error executing build: %s", e.what());
            }
            ImGui::CloseCurrentPopup();
        }

        if (ImGui::Button("Run"))
        {
            try {
                std::stringstream ss;
                ss << Config::runCom;
                std::string command = ss.str();
                bp::system(command);
                ImGui::Text("Run command executed successfully.");
            }
            catch (const std::exception& e) {
                ImGui::Text("Error executing build: %s", e.what());
            }
            ImGui::CloseCurrentPopup();
        }

        if (ImGui::Button("Test"))
        {
            try {
                std::stringstream ss;
                ss << Config::testCom;
                std::string command = ss.str();
                bp::system(command);
                ImGui::Text("Test command executed successfully.");
            }
            catch (const std::exception& e) {
                ImGui::Text("Error executing build: %s", e.what());
            }
            ImGui::CloseCurrentPopup();
        }

        ImGui::EndPopup();
    }
}
