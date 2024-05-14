#include "tabItem.h"

void tabItem::tab()
{
	if (ImGui::BeginTabItem("NewTab", NULL, NULL))
	{
		if (ImGui::TabItemButton("New Tab"))
		{

		}
		ImGui::EndTabItem();
	}
}
