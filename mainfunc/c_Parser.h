#pragma once
#include "../colorText/TextEditor.h"
class c_Parser
{
public:
<<<<<<< Updated upstream
	static void parseCode(TextEditor& editor);
	static void clearResolvedErrors(TextEditor& editor);
	//static void clearResolvedErrors(TextEditor& editor, const std::map<int, std::string>& currentErrors);
=======
    void parseCode(TextEditor& editor);
    void clearResolvedErrors(TextEditor& editor);

    void applySearchHighlighting(TextEditor& editor);

private:
    std::map<int, std::string> errorMarkers; // Non-static member
>>>>>>> Stashed changes
};

