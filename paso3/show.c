// este archivo no se entrega. es para ver las cosas mas claras.

#include "minishell.h"

void	show(t_list *list)
{
	int	x;

	x = 0;
	printf("----principio de show----\n");
	while (list->next)
	{
		printf("nodo %d, => %s\n", x, list->content);
		list = list->next;
		x++;
	}
	printf("nodo %d, => %s\n", x, list->content);
	printf("----fin de show-----\n");
}
