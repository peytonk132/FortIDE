#pragma once
#include <boost/filesystem.hpp>
class Config
{
public:
	static char buildCom[256];
	static char runCom[256];
	static char testCom[256];
	static void SettingsMenu();

	void configMenu();
private:
	struct TomlFile {
		std::string path;
	};




};

