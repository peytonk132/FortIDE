#pragma once
#include "../colorText/TextEditor.h"
#include <map>
#include <string>

class c_Parser
{
public:
    void parseCode(TextEditor& editor);
    void clearResolvedErrors(TextEditor& editor);

private:
    std::map<int, std::string> errorMarkers; // Non-static member
};
