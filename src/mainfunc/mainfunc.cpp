#include "mainfunc.h"
#include "../../deps/ImGuiColorTextEdit/TextEditor.h"
#include "Config.h"
#include "NewFile.h"
#include "c_Parser.h"
#include <boost/asio.hpp>
#include <boost/filesystem.hpp>
#include <boost/process.hpp>
#include <cstdlib>
#include <fstream>
#include <future>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;
namespace bp = boost::process;
namespace fs = boost::filesystem;

int compileRes;
ostringstream oss;
ostringstream setStr;

char multiPurp::buf[2048]{'\0'};

static char repoUrl[128] = "https://github.com/user/repo.git";
static char localPath[128] = "";
static char commitMessage[128] = "Initial commit";
static bool commitSuccess = false;
static bool pushSuccess = false;
static std::string repoPath =
    ""; // Path to the local repo, can be set dynamically
static char repoPathBuf[256] = ""; // Buffer for InputText

// Declare variables to manage threading
std::atomic<bool> _isRepoPickerRunning = false;
std::thread _repoPickerThread;

std::unique_ptr<std::istream>
    fileContent; // Unique pointer to hold the file content
// Highlighting is done by ImGuiColorTextEdit. The repo:
// https://github.com/BalazsJako/ImGuiColorTextEdit

bool BeginButtonDropDown(const char *label, ImVec2 buttonSize) {
  ImGui::SameLine(0.0f, 0.0f);

  ImGuiWindow *window = ImGui::GetCurrentWindow();
  ImGuiContext &g = *GImGui;
  const ImGuiStyle &style = g.Style;

  // Get screen position before creating the dropdown button
  ImVec2 dropdownButtonPos = ImGui::GetCursorScreenPos();
  ImVec2 dropdownButtonSize(20.0f, buttonSize.y);

  // Create invisible dropdown button
  ImGui::PushID(label);
  bool pressed = ImGui::Button("##", dropdownButtonSize);
  ImGui::PopID();

  // Calculate arrow position with explicit component operations
  ImVec2 center = ImVec2(dropdownButtonPos.x + dropdownButtonSize.x * 0.5f,
                         dropdownButtonPos.y + dropdownButtonSize.y * 0.5f);
  center.y -= dropdownButtonSize.y * 0.25f;

  // Draw arrow with explicit component-wise scaling
  const float arrowSize = dropdownButtonSize.y * 0.25f;
  ImVec2 a =
      ImVec2(center.x + (0.0f * arrowSize), center.y + (1.0f * arrowSize));
  ImVec2 b =
      ImVec2(center.x + (-0.866f * arrowSize), center.y + (-0.5f * arrowSize));
  ImVec2 c =
      ImVec2(center.x + (0.866f * arrowSize), center.y + (-0.5f * arrowSize));
  window->DrawList->AddTriangleFilled(a, b, c,
                                      ImGui::GetColorU32(ImGuiCol_Text));

  // Calculate popup position
  ImVec2 popupPos = ImVec2(dropdownButtonPos.x - buttonSize.x,
                           dropdownButtonPos.y + dropdownButtonSize.y);

  ImGui::SetNextWindowPos(popupPos, ImGuiCond_Appearing);

  if (pressed)
    ImGui::OpenPopup(label);

  if (ImGui::BeginPopup(label)) {
    ImGui::PushStyleColor(ImGuiCol_FrameBg, style.Colors[ImGuiCol_Button]);
    ImGui::PushStyleColor(ImGuiCol_WindowBg, style.Colors[ImGuiCol_Button]);
    ImGui::PushStyleColor(ImGuiCol_ChildBg, style.Colors[ImGuiCol_Button]);
    return true;
  }

  return false;
}

void EndButtonDropDown() {
  ImGui::PopStyleColor(3);
  ImGui::EndPopup();
}

int _repoPathPicker() {
  auto dialog = pfd::select_folder("Select Repository Path");
  if (!dialog.result().empty()) {
    repoPath = dialog.result(); // Update std::string with selected path
    std::strncpy(repoPathBuf, repoPath.c_str(),
                 sizeof(repoPathBuf) - 1);       // Sync buffer with repoPath
    repoPathBuf[sizeof(repoPathBuf) - 1] = '\0'; // Ensure null-termination
  }
  return 0;
}

// Function to safely start `repoPathPicker` in a new thread
void _startRepoPathPicker() {
  if (_isRepoPickerRunning)
    return;

  _isRepoPickerRunning = true;

  // Launch repoPathPicker in a new thread
  _repoPickerThread = std::thread([]() {
    _repoPathPicker();            // Call the function
    _isRepoPickerRunning = false; // Reset flag after completion
  });

  // Detach the thread to let it run independently
  _repoPickerThread.detach();
}

std::string multiPurp::chooseFilePath() {
  auto dialog = pfd::open_file("Select a Fortran File", "",
                               {"Fortran Files (*.f90)", "*.f90"});
  if (!dialog.result().empty()) {
    return dialog.result()[0]; // Return the selected file path
  } else {
    std::cout << "User canceled the file selection." << std::endl;
    return "";
  }
}

bool multiPurp::createFile(const std::string &filePath) {
  std::ofstream newFile(filePath);
  if (newFile.is_open()) {
    newFile.close();
    std::cout << "File created at: " << filePath << std::endl;
    return true;
  } else {
    std::cerr << "Error creating file at: " << filePath << std::endl;
    return false;
  }
}

std::string multiPurp::readFileContent(const std::string &filePath) {
  std::ifstream file(filePath);
  if (file.is_open()) {
    std::string content((std::istreambuf_iterator<char>(file)),
                        std::istreambuf_iterator<char>());
    file.close();
    return content;
  } else {
    std::cerr << "Error reading file: " << filePath << std::endl;
    return "";
  }
}

bool multiPurp::saveToFile(const std::string &content) {
  auto dialog = pfd::save_file(
      "Save File As", "", {"Text Files (*.txt)", "*.txt", "All Files", "*"});
  if (!dialog.result().empty()) {
    std::ofstream file(dialog.result());
    if (file.is_open()) {
      file << content;
      file.close();
      std::cout << "File saved at: " << dialog.result() << std::endl;
      return true;
    } else {
      std::cerr << "Error saving file at: " << dialog.result() << std::endl;
      return false;
    }
  } else {
    std::cout << "User canceled the save operation." << std::endl;
    return false;
  }
}

std::vector<multiPurp::SearchOutput>
multiPurp::findMatches(const std::string &searchWord,
                       const std::string &content) {
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

      pos = line.find(
          searchWord,
          pos + searchWord
                    .length()); // Search for next occurrence in the same line
    }
  }

  return matches;
}

int multiPurp::menuBarfunc(TextEditor &editor) {
  if (ImGui::BeginMainMenuBar()) {

    static bool showPopup = false;
    static bool saveDialog = false;
    if (ImGui::IsKeyPressed(ImGuiKey_LeftCtrl) ||
        ImGui::IsKeyPressed(ImGuiKey_RightCtrl) &&
            ImGui::IsKeyPressed(ImGuiKey_S)) {
      saveDialog = true; // Set flag to open the file dialog
    }

    // Save button functionality

    if (ImGui::Button("Save")) {
      printf("Still doesn't work.");
    }

    if (BeginButtonDropDown("##jdjf", ImVec2(100, 30))) {
      if (ImGui::Button("New File")) {
        CreateNewFile nf;
        nf.NewFile();
      }
      EndButtonDropDown();
    }

    if (showPopup) {
      ImGui::OpenPopup("Popup");
      showPopup = false;
    }

    multiPurp::Compilefunc();
    Config sett;
    sett.SettingsMenu();

    OpenGitControl();

    // Terminal term;
    // term.Render();
    ImGui::EndMainMenuBar();
  }

  return 0;
}

int multiPurp::commitChanges(git_repository *repo,
                             const std::string &commitMessage) {
  int error = 0;
  git_oid commit_oid, tree_oid;
  git_index *index = nullptr;
  git_tree *tree = nullptr;
  git_object *parent = nullptr;
  git_reference *ref = nullptr;
  git_signature *author_signature = nullptr;
  git_signature *committer_signature = nullptr;

  // Get the HEAD commit (if it exists)
  error = git_revparse_ext(&parent, &ref, repo, "HEAD");
  if (error == GIT_ENOTFOUND) {
    printf("HEAD not found. Creating first commit\n");
    error = 0;
  } else if (error != 0) {
    const git_error *err = git_error_last();
    if (err)
      printf("ERROR %d: %s\n", err->klass, err->message);
    else
      printf("ERROR %d: no detailed info\n", error);
    return error;
  }

  // Get the repository index
  if ((error = git_repository_index(&index, repo)) != 0) {
    const git_error *err = git_error_last();
    printf("ERROR %d: %s\n", error, err ? err->message : "Failed to get index");
    return error;
  }

  // Write the index to a tree
  if ((error = git_index_write_tree(&tree_oid, index)) != 0) {
    const git_error *err = git_error_last();
    printf("ERROR %d: %s\n", error,
           err ? err->message : "Failed to write tree");
    git_index_free(index);
    return error;
  }

  git_index_write(index);
  git_index_free(index);

  // Lookup the tree object
  if ((error = git_tree_lookup(&tree, repo, &tree_oid)) != 0) {
    const git_error *err = git_error_last();
    printf("ERROR %d: %s\n", error,
           err ? err->message : "Failed to lookup tree");
    return error;
  }

  // Create author and committer signatures
  if ((error = git_signature_default(&author_signature, repo)) != 0) {
    printf("ERROR: Could not create author signature\n");
    git_tree_free(tree);
    return error;
  }
  committer_signature =
      author_signature; // Use the same signature for committer

  // Create the commit
  error = git_commit_create_v(&commit_oid, repo, "HEAD", author_signature,
                              committer_signature,
                              NULL, // UTF-8 encoding
                              commitMessage.c_str(), tree, parent ? 1 : 0,
                              parent // NULL for the first commit
  );

  if (error != 0) {
    const git_error *err = git_error_last();
    printf("ERROR %d: %s\n", error,
           err ? err->message : "Failed to create commit");
  } else {
    printf("Commit created successfully\n");
  }

  // Cleanup
  git_tree_free(tree);
  git_object_free(parent);
  git_signature_free(author_signature);
  git_reference_free(ref);

  return error;
}

bool multiPurp::pushChanges(git_repository *repo) {
  // pushProgress = { 0, 0, 0, 0, 0, false };
  int error;
  git_remote *remote = nullptr;
  git_push_options options = GIT_PUSH_OPTIONS_INIT;
  git_remote_callbacks callbacks = GIT_REMOTE_CALLBACKS_INIT;
  const char *refspec =
      "refs/heads/main"; // Change this if your default branch is different
  git_strarray refspecs;

  // Initialize refspecs
  refspecs.strings = const_cast<char **>(&refspec);
  refspecs.count = 1;

  // Lookup the remote
  error = git_remote_lookup(&remote, repo, "origin");
  if (error != 0) {
    const git_error *err = git_error_last();
    printf("ERROR %d: %s\n", error, err ? err->message : "Unknown error");
    return false;
  }

  // Set up the callbacks for authentication
  callbacks.credentials = [](git_credential **out, const char *url,
                             const char *username_from_url,
                             unsigned int allowed_types, void *payload) {
    return git_credential_userpass_plaintext_new(
        out, "peytonk132", ""); // Use your actual token here
  };
  options.callbacks = callbacks;

  // Perform the push
  error = git_remote_push(remote, &refspecs, &options);
  if (error != 0) {
    const git_error *err = git_error_last();
    printf("ERROR %d: %s\n", error,
           err ? err->message : "Failed to push changes");
    git_remote_free(remote);
    return false;
  }

  printf("Pushed successfully\n");
  git_remote_free(remote);
  // pushProgress = 100;
  // isPushing = false;
  return true;
}

void multiPurp::OpenGitControl() {
  boost::filesystem::path currentPath = boost::filesystem::current_path();
  std::string pathString = currentPath.string(); // Keep the string in scope
  const char *pathCString = pathString.c_str();  // Use c_str() for const char*

  if (ImGui::Button("Git")) {
    ImGui::OpenPopup("Git_Options");
  }

  if (ImGui::BeginPopup("Git_Options")) {
    ImGui::Begin("##Placeholder");

    // Commit Section
    if (ImGui::CollapsingHeader("Commit Latest")) {
      ImGui::InputText("Commit Message", commitMessage, sizeof(commitMessage));
      if (ImGui::Button("Commit")) {
        // Ensure you pass a valid git_repository pointer here
        git_repository *repo = nullptr;
        // Initialize repo with your project repository path
        git_repository_open(&repo, pathCString);

        multiPurp::commitChanges(repo, commitMessage);
        git_repository_free(repo);
      }
    }

    // Push Section
    if (ImGui::CollapsingHeader("Push Changes")) {
      if (ImGui::Button("Push")) {
        // Ensure you pass a valid git_repository pointer here
        git_repository *repo = nullptr;
        // Initialize repo with your project repository path
        git_repository_open(&repo, pathCString);

        if (multiPurp::pushChanges(repo)) {
          printf("Push Successful");
        } else {
          printf("Push failed\n");
        }
        git_repository_free(repo);
      }
    }

    ImGui::End();
    ImGui::EndPopup();
  }
}

void multiPurp::Compilefunc() {
  Config cfg;
  if (ImGui::Button("Build Options")) {
    ImGui::OpenPopup("Build Options");
  }

  if (ImGui::BeginPopup("Build Options")) {
    // Disable buttons while build is running
    ImGui::BeginDisabled(buildInProgress);

    if (ImGui::Button("Build")) {
      startAsyncProcess(cfg.buildCom, "Build");
    }
    if (ImGui::Button("Run")) {
      startAsyncProcess(cfg.runCom, "Run");
    }

    if (ImGui::Button("Test")) {
      startAsyncProcess(cfg.testCom, "Test");
    }

    ImGui::EndDisabled();

    if (buildInProgress) {
      ImGui::SameLine();
      ImGui::TextColored(ImVec4(1, 1, 0, 1), "Running...");
    }

    ImGui::EndPopup();
  }
}
