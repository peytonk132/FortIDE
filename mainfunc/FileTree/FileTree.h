#pragma once

#include <imgui.h>
#include <imgui-SFML.h>
#include <boost/filesystem.hpp>
#include <vector>
#include <string>
#include <functional>
#include <chrono>

class FileTree {
public:
    std::string clickedFileName;
    using FileClickCallback = std::function<void(const std::string&)>;

    void treeNode();
    void setFileClickCallback(FileClickCallback callback);
    
    

private:
    std::string filePath;
    /*struct FileName
    {
        std::string path;
        bool isDirectory;

        FileName() : isDirectory(false) {}

        FileName(const std::string& path, bool isDirectory)
            : path(path), isDirectory(isDirectory) {}
    };*/

    struct FileNode 
    {
        std::string name;
        std::string path;
        std::vector<FileNode> children;
        bool isDirectory;

        // Default constructor
        FileNode() : isDirectory(false) {}

        // User-defined constructor
        FileNode(const std::string& name, const std::string& path, bool isDirectory)
            : name(name), path(path), isDirectory(isDirectory) {}
    };

    FileNode TraverseDirectory(const boost::filesystem::path& directory);
    void RenderFileNode(FileNode& node);
    //int getFilePath(FileName& node);
    void UpdateTree();

    FileNode rootNode;
    bool isInitialized = false;

    FileClickCallback fileClickCallback;

    std::chrono::time_point<std::chrono::steady_clock> lastUpdateTime;
    std::chrono::milliseconds updateInterval{ 1000 }; //Update interval of 1 second
};