#pragma once
#include "imgui.h"
#include "imgui-SFML.h"
#include "SFML/Graphics.hpp"
#include "nfd.h"
#include "../colorText/TextEditor.h"
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;


class multiPurp
{
public:
	static char buf[2048]; // Declaration of buf as a static member variable
	static char ftcbuf[256];
	static char buildDir[256];
	static char exeName[256];
	nfdchar_t* outPathBuf; // Define outPathBuf as a member variable
	nfdchar_t* settingsBuf; // Define settingsBuf as a member variable
	nfdchar_t* buildPath;
	nfdchar_t* projPath = nullptr;

	multiPurp() : outPathBuf(NULL) {} // Initialize outPathBuf to nullptr in the constructor

	void Compilefunc();
	void mainEditor(TextEditor& editor);
	void settingsInput();
	void loadFont();
	void menuBarfunc(TextEditor& editor);
	int gitControl();
	//static void Debug();

private:
	sf::Texture fontText;

};

