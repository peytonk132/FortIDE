#include "FileTree.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <chrono>

namespace fs = boost::filesystem;

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
    ImGuiTreeNodeFlags flags = node.isDirectory ? ImGuiTreeNodeFlags_OpenOnArrow : ImGuiTreeNodeFlags_Leaf;

    if (ImGui::TreeNodeEx(node.name.c_str(), flags))
    {
        if (node.isDirectory)
        {
            for (auto& child : node.children)
            {
                RenderFileNode(child);
            }
        }

        // If the node is a file and the item is clicked
        if (!node.isDirectory && ImGui::IsItemClicked())
        {
            clickedFileName = node.name;  // Store the clicked file name
            filePath = node.path;         // Store the clicked file path
            std::cout << "Clicked file: " << clickedFileName << std::endl;
            std::cout << "File path: " << filePath << std::endl;

            // Invoke the callback, passing the file path
            if (fileClickCallback)
            {
                fileClickCallback(filePath);
            }
        }


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

                // Refresh the root node after moving a file or directory
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
        rootNode = TraverseDirectory(rootPath);
        isInitialized = true;
        lastUpdateTime = std::chrono::steady_clock::now();
    }

    // Update the tree at regular intervals
    auto now = std::chrono::steady_clock::now();
    if (now - lastUpdateTime >= updateInterval)
    {
        UpdateTree();
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
