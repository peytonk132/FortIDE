#include "parser.h"
#include <tinyxml2.h>
#include <sstream>
#include <iostream>

std::vector<Package> parseFpmSearchOutput(const std::string& output) {
    std::vector<Package> packages;
    std::istringstream stream(output);
    std::string line;
    Package pkg;

    while (std::getline(stream, line)) {
        if (line.find("name:") != std::string::npos) {
            if (!pkg.name.empty()) {
                packages.push_back(pkg);
                pkg = Package(); // reset for the next package
            }
            pkg.name = line.substr(1);
        }
        else if (line.find("description:") != std::string::npos) {
            pkg.description = line.substr(1);
        }
        else if (line.find("license:") != std::string::npos) {
            pkg.license = line.substr(1);
        }
        else if (line.find("version:") != std::string::npos) {
            pkg.version = line.substr(1);
        }
        else if (line.find("author:") != std::string::npos) {
            pkg.author = line.substr(1);
        }
        else if (line.find("maintainer:") != std::string::npos) {
            pkg.maintainer = line.substr(1);
        }
        else if (line.find("copyright:") != std::string::npos) {
            pkg.copyright = line.substr(1);
        }
        else if (line.find("git:") != std::string::npos) {
            pkg.git = line.substr(1);
        }
        else if (line.find("git-tag:") != std::string::npos) {
            pkg.git_tag = line.substr(1);
        }
        else if (line.find("toml:") != std::string::npos) {
            pkg.toml = line.substr(1);
        }
    }

    if (!pkg.name.empty()) {
        packages.push_back(pkg);
    }

    return packages;
}

std::string convertToXML(const std::vector<Package>& packages) {
    std::ostringstream xml;
    xml << "<packages>\n";
    for (const auto& pkg : packages) {
        xml << "  <package>\n";
        xml << "    <name>" << pkg.name << "</name>\n";
        xml << "    <version>" << pkg.version << "</version>\n";
        xml << "    <description>" << pkg.description << "</description>\n";
        xml << "    <license>" << pkg.license << "</license>\n";
        xml << "    <author>" << pkg.author << "</author>\n";
        xml << "    <maintainer>" << pkg.maintainer << "</maintainer>\n";
        xml << "    <copyright>" << pkg.copyright << "</copyright>\n";
        xml << "    <git>" << pkg.git << "</git>\n";
        xml << "    <git-tag>" << pkg.git_tag << "</git-tag>\n";
        xml << "    <toml>" << pkg.toml << "</toml>\n";
        xml << "  </package>\n";
    }
    xml << "</packages>\n";
    return xml.str();
}

std::vector<Package> loadPackagesFromXML(const std::string& filename) {
    std::vector<Package> packages;
    tinyxml2::XMLDocument doc;
    if (doc.LoadFile(filename.c_str()) != tinyxml2::XML_SUCCESS) {
        std::cerr << "Unable to load XML file\n";
        return packages;
    }

    tinyxml2::XMLElement* root = doc.FirstChildElement("packages");
    if (root == nullptr) {
        std::cerr << "Invalid XML format\n";
        return packages;
    }

    for (tinyxml2::XMLElement* elem = root->FirstChildElement("package"); elem != nullptr; elem = elem->NextSiblingElement("package")) {
        Package pkg;
        pkg.name = elem->FirstChildElement("name")->GetText();
        pkg.version = elem->FirstChildElement("version")->GetText();
        pkg.description = elem->FirstChildElement("description")->GetText();
        pkg.license = elem->FirstChildElement("license")->GetText();
        pkg.author = elem->FirstChildElement("author")->GetText();
        pkg.maintainer = elem->FirstChildElement("maintainer")->GetText();
        pkg.copyright = elem->FirstChildElement("copyright")->GetText();
        pkg.git = elem->FirstChildElement("git")->GetText();
        pkg.git_tag = elem->FirstChildElement("git-tag")->GetText();
        pkg.toml = elem->FirstChildElement("toml")->GetText();
        packages.push_back(pkg);
    }

    return packages;
}