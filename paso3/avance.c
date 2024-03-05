
#include "minishell.h"


void	show_token(char **token)
{
	int	x;

	x = 0;
	printf("los pretoken son: ");
	while (token[x])
	{
		printf("%s, ", token[x]);
		x++;
	}
	printf("\n");
}

char	**tokenpipex(char *line)
{
	char	**pretoken;
	int		x;

	pretoken = ft_protsplit(line, '|');
	show_token(pretoken);
	return (pretoken);
}

/* esta funcion tiene print y cosas que ahora esta bien pero que habra que borrar cuando este terminada la tokenizacion */
t_list	*new_token(char *line)
{
	char	**token;
	t_list	*new_lst;
	t_list	*lst_token;
	int		x;
	t_list	*aux_borrar;

	x = 1;
	new_lst = NULL;
	lst_token = NULL;
	token = tokenpipex(line);
	new_lst = ft_lstnew(token[0]);
	printf("primer nodo de lista --> %s\n", new_lst->content);
	ft_lstadd_back(&lst_token, new_lst);
	printf("primer nodo de lista2 --> %s\n", lst_token->content);
	while (token[x])
	{
		new_lst = ft_lstnew(token[x]);
		ft_lstadd_back(&lst_token, new_lst);
		aux_borrar = ft_lstlast(lst_token);
		printf("aux_borrar = %s\n", aux_borrar->content);
		x++;
	}
	return (lst_token);
}
