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

	static void open();
	static void save();
	static void Compilefunc();
	static void mainEditor();
	//static void Debug();
	
};

