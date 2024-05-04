#pragma once
#include "imgui.h"
#include "imgui-SFML.h"
#include "SFML/Graphics.hpp"
#include "nfd.h"
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;


class multiPurp
{
public:
	static char buf[2048]; // Declaration of buf as a static member variable
	static char ftcbuf[256];
	nfdchar_t* outPathBuf; // Define outPathBuf as a member variable

	multiPurp() : outPathBuf(NULL) {} // Initialize outPathBuf to nullptr in the constructor

	void open();
	void save();
	void Compilefunc();
	void mainEditor();
	void settingMenu();
	//static void Debug();
	
};

