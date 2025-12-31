#pragma once

#include <git2.h>


class GitControl {
public: 
int	git_init(git_repository **out, const char *path, unsigned int is_bare);

private:
};
