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
    // Add an asterisk if the file is unsaved
    std::string displayName = node.name;
    if (!node.isDirectory && node.isUnsaved)
    {
        displayName += " *"; // Append an asterisk for unsaved files
    }

    ImGuiTreeNodeFlags flags = node.isDirectory ? ImGuiTreeNodeFlags_OpenOnArrow : ImGuiTreeNodeFlags_Leaf;

    if (ImGui::TreeNodeEx(displayName.c_str(), flags))
    {
        if (node.isDirectory)
        {
            for (auto& child : node.children)
            {
                FileTree::RenderFileNode(child);
            }
        }

        if (!node.isDirectory && ImGui::IsItemClicked())
        {
            FileTree::clickedFileName = node.name;
            FileTree::filePath = node.path;
            std::cout << "Clicked file: " << clickedFileName << std::endl;
            std::cout << "File path: " << filePath << std::endl;

            if (fileClickCallback)
            {
                fileClickCallback(filePath);
            }
        }

        // Drag-and-drop logic remains unchanged
        if (ImGui::BeginDragDropSource(ImGuiDragDropFlags_SourceAllowNullID)) {
            ImGui::SetDragDropPayload("DND_FILE", node.path.c_str(), node.path.size() + 1);
            ImGui::Text("Moving: %s", node.name.c_str());
            ImGui::EndDragDropSource();
        }

        if (ImGui::BeginDragDropTarget()) {
            if (const ImGuiPayload* payload = ImGui::AcceptDragDropPayload("DND_FILE"))
            {
                std::string sourcePath((const char*)payload->Data);
                std::string destinationPath = node.path + "/" + fs::path(sourcePath).filename().string();

                std::cout << "Source: " << sourcePath << std::endl;
                std::cout << "Destination: " << destinationPath << std::endl;

                rootNode = TraverseDirectory(fs::path(rootNode.path));
            }
            ImGui::EndDragDropTarget();
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
