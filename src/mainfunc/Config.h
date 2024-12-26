#pragma once
#include <boost/filesystem.hpp>
class Config
{
public:
	char buildCom[256];
	char runCom[256];
	char testCom[256];
	void SettingsMenu();

	void configMenu();
private:
	struct TomlFile {
		std::string path;
	};




};

