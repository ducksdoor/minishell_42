
#include "minishell.h"

void	simple_children(char *line, char **env, pid_t pid1)
{
	if (pid1 == 0)
	{
		ft_exe(line, env);
		ft_error("exe");
	}
}
