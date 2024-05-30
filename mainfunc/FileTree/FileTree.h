#pragma once

#include <imgui.h>
#include <imgui-SFML.h>
#include <boost/filesystem.hpp>
#include <vector>
#include <string>
#include <functional>

class FileTree {
public:
    using FileClickCallback = std::function<void(const std::string&)>;

    void treeNode();
    void setFileClickCallback(FileClickCallback callback);

private:
    struct FileNode {
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

    FileNode rootNode;
    bool isInitialized = false;

    FileClickCallback fileClickCallback;
};
