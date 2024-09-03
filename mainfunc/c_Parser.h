#pragma once
#include "../colorText/TextEditor.h"
class c_Parser
{
public:
	static void parseCode(TextEditor& editor);
	static void clearResolvedErrors(TextEditor& editor);
	//static void clearResolvedErrors(TextEditor& editor, const std::map<int, std::string>& currentErrors);
};

