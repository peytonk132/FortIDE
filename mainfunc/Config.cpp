#include "Config.h"
#include <imgui.h>
#include <imgui-SFML.h>
#include <iostream>

char Config::buildCom[256] = { "fpm build" };
char Config::runCom[256] = { "fpm run" };
char Config::testCom[256] = { "fpm test" };
void Config::SettingsMenu()
{
	if (ImGui::Button("Settings"))
	{
		ImGui::OpenPopup("Settings");
	}
	if (ImGui::BeginPopup("Settings", NULL))
	{
		if (ImGui::Button("Build Command"))
		{
			ImGui::OpenPopup("Build");
}
		if (ImGui::BeginPopup("Build", NULL))
		{
			ImGui::InputText("Build Command", Config::buildCom, 256);
			if (ImGui::Button("Ok"))
			{
				std::cout << "Written successfully!" << std::endl;
				ImGui::CloseCurrentPopup();
			}
			ImGui::EndPopup();
		}

		if (ImGui::Button("Run Command"))
		{
			ImGui::OpenPopup("Run");
		}
		if (ImGui::BeginPopup("Run", NULL))
		{
			ImGui::InputText("Run Command", Config::runCom, 256);
			if (ImGui::Button("Ok"))
			{
				std::cout << "Written successfully!" << std::endl;
				ImGui::CloseCurrentPopup();
			}
			ImGui::EndPopup();
		}

		if (ImGui::Button("Test Command"))
		{
			ImGui::OpenPopup("Test");
		}
		if (ImGui::BeginPopup("Test", NULL))
		{
			ImGui::InputText("Test Command", Config::testCom, 256);
			if (ImGui::Button("Ok"))
			{
				std::cout << "Written successfully!" << std::endl;
				ImGui::CloseCurrentPopup();
			}
			ImGui::EndPopup();
		}
		ImGui::EndPopup();
	}
	
}
