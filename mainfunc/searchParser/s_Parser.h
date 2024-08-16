#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <vector>

struct Package {
    std::string name;
    std::string version;
    std::string description;
    std::string license;
    std::string author;
    std::string maintainer;
    std::string copyright;
    std::string git;
    std::string git_tag;
    std::string toml;
};


std::vector<Package> parseFpmSearchOutput(const std::string& output);
std::string convertToXML(const std::vector<Package>& packages);
std::vector<Package> loadPackagesFromXML(const std::string& filename);

#endif // PARSER_H
