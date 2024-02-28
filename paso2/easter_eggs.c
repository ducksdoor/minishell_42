
#include "minishell.h"

void	joke(char *line)
{
	if (ft_strncmp(line, "make", 4) == 0)
	{
		printf("DESPIERTA! que la vida te va a comer.\n");
		printf("Tienes que salir de la minishell...\n");
	}
}