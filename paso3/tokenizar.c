
#include "minishell.h"

/* esta es la funcion que crea nodulos*/
static t_list	**creation(t_list **aux, char **nuevo_modulo)
{
	t_list	**result;
	t_list	*aux_aux;

	aux_aux = aux;

	printf(">\n");
	return (result);
}

/* hay que modificar el modulo en el que se encuentre la > */
/* ahora, la cosa es crear una funcion que me organice la lista, al tener la funcion se puede reciclar */
void	direction(t_list **lst_token)
{
	t_list	*aux;
	char	*char_aux;
	char	**nuevo_modulo;

	aux = *lst_token;
	while (aux)
	{
		printf("nodo, aux->content 2 debug = %s\n", aux->content);
		char_aux = aux->content;
		if (ft_strchr(char_aux, '>') == 1)
		{
			nuevo_modulo = ft_protsplit(char_aux, '>');
			lst_token = creation(&aux, nuevo_modulo);
		}
		aux = aux->next;
	}
	printf("-----------fin debug 2---------------\n");
}

/* esta funcion tiene print y cosas que ahora esta bien pero que habra que borrar cuando este terminada la tokenizacion */
/* ------->>>>>>> no se gestiona que existan dos || seguidos */
/* no la reduzco porque hay que borrar muchas cosas en concreto todas las cosas que hay que borrar...*/
t_list	*new_token_pipex(char *line)
{
	char	**token;
	t_list	*new_lst;
	t_list	*lst_token;
	int		x;
	t_list	*aux_borrar;

	x = 0;
	new_lst = NULL;
	lst_token = NULL;
	token = ft_protsplit(line, '|');
	while (token[x])
	{
		new_lst = ft_lstnew(token[x]);
		ft_lstadd_back(&lst_token, new_lst);
		aux_borrar = ft_lstlast(lst_token);
		printf("nodo->content [%d] = %s\n", x, aux_borrar->content);
		if (token[x + 1] != NULL)
		{
			new_lst = ft_lstnew("|");
			ft_lstadd_back(&lst_token, new_lst);
			aux_borrar = ft_lstlast(lst_token);
			printf("nodo->content [%d] = %s\n", x, aux_borrar->content);
		}
		else if (last_char(line) == '|')
		{
			printf("paso por aqui\n");
			new_lst = ft_lstnew("|");
			ft_lstadd_back(&lst_token, new_lst);
			aux_borrar = ft_lstlast(lst_token);
			printf("nodo->content [%d] = %s\n", x, aux_borrar->content);
		}
		x++;
	}
	printf("-----------fin debug 1---------------\n");
	return (lst_token);
}

t_list	*new_token(char *line)
{
	t_list	*lst_token;

	lst_token = new_token_pipex(line);
	direction(&lst_token);
	return (lst_token);
}
