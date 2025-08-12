#include "FileTree.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <chrono>

namespace fs = boost::filesystem;
// Define and initialize static variables
std::string FileTree::clickedFileName = ""; // Initialize with an empty string
std::string FileTree::filePath = "";        // Initialize with an empty string
FileTree::FileNode FileTree::rootNode("", "", true); // Initialize rootNode with default values
FileTree::FileClickCallback FileTree::fileClickCallback = nullptr; // Initialize callback to null

FileTree::FileNode FileTree::TraverseDirectory(const fs::path& directory)
{
    FileNode node(directory.filename().string(), directory.string(), fs::is_directory(directory));
    if (fs::is_directory(directory))
    {
        for (const auto& entry : fs::directory_iterator(directory))
        {
            node.children.push_back(TraverseDirectory(entry.path()));
        }
    }

    return node;
}

void FileTree::RenderFileNode(FileNode& node)
{
    // Remove asterisk logic - tabs handle this now
    ImGuiTreeNodeFlags flags = node.isDirectory ?
        ImGuiTreeNodeFlags_OpenOnArrow :
        ImGuiTreeNodeFlags_Leaf | ImGuiTreeNodeFlags_NoTreePushOnOpen;

    bool isOpen = ImGui::TreeNodeEx(node.name.c_str(), flags);

    if (!node.isDirectory && ImGui::IsItemClicked()) {
        FileTree::clickedFileName = node.name;
        FileTree::filePath = node.path;
        if (fileClickCallback) {
            fileClickCallback(node.path);
        }
    }

    if (isOpen && node.isDirectory) {
        for (auto& child : node.children) {
            RenderFileNode(child);
        }
        ImGui::TreePop();
    }
}

void FileTree::treeNode()
{
    if (!isInitialized)
    {
        // Specify your root directory here
        fs::path rootPath = fs::current_path();
        rootNode = FileTree::TraverseDirectory(rootPath);
        isInitialized = true;
        lastUpdateTime = std::chrono::steady_clock::now();
    }

    // Update the tree at regular intervals
    auto now = std::chrono::steady_clock::now();
    if (now - lastUpdateTime >= updateInterval)
    {
        FileTree::UpdateTree();
        lastUpdateTime = now;
    }

    ImVec2 fixedWidgetPosition = ImVec2(400, 30); // Set your desired fixed position here
    ImVec2 sizedWidget = ImVec2(400, 450);

    ImGui::SetNextWindowPos(fixedWidgetPosition, ImGuiCond_Always);
    ImGui::SetNextWindowSize(sizedWidget, ImGuiCond_Always);

    ImGui::Begin("File Tree", NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);
    RenderFileNode(rootNode);
    ImGui::End();
}

void FileTree::UpdateTree()
{
    fs::path rootPath = fs::current_path();
    rootNode = TraverseDirectory(rootPath);
}

void FileTree::setFileClickCallback(FileClickCallback callback)
{
    fileClickCallback = std::move(callback);
}
