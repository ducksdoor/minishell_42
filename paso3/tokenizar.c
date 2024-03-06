
#include "minishell.h"

void	direction(t_list **lst_token)
{
	t_list	*aux;

	aux = *lst_token;
	while (aux->next != NULL)
	{
		printf("nodo->content 2 debug = %s\n",aux->content);
		aux = aux->next;
	}
	printf("-----------fin debug 2---------------\n");
}

/* esta funcion tiene print y cosas que ahora esta bien pero que habra que borrar cuando este terminada la tokenizacion */
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
	new_lst = ft_lstnew(token[0]);
	ft_lstadd_back(&lst_token, new_lst);
	while (token[x])
	{
		new_lst = ft_lstnew(token[x]);
		ft_lstadd_back(&lst_token, new_lst);
		aux_borrar = ft_lstlast(lst_token);
		printf("nodo->content [%d] = %s\n",x, aux_borrar->content);
		x++;
	}
	printf("-----------fin debug 1---------------\n");
	return (lst_token);
}

t_list	*new_token(char *line)
{
	t_list	*lst_token;

	lst_token = new_token_pipex(line);
	//direction(&lst_token);
	return (lst_token);
}
