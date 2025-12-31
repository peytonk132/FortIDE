#include "Git.h"
#include <imgui.h>
int git_init(git_repository **output, const char *path, unsigned int is_bare){
	return git_repository_init(output, path, is_bare);
};


int control_panel(){
	ImGui::Begin("Git Control Panel", NULL, NULL);
	ImGui::End();
	return 0;
};
