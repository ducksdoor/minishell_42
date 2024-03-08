/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenizar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:22:57 by lortega-          #+#    #+#             */
/*   Updated: 2023/09/06 21:23:01 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* ------->>>>>>> no se gestiona que existan dos || seguidos */

t_list	*new_token_pipex(char *line)
{
	char	**token;
	t_list	*new_lst;
	t_list	*lst_token;
	int		x;

	x = 0;
	lst_token = NULL;
	token = ft_protsplit(line, '|');
	while (token[x])
	{
		new_lst = ft_lstnew(token[x]);
		ft_lstadd_back(&lst_token, new_lst);
		if (token[x + 1] != NULL)
		{
			new_lst = ft_lstnew("|");
			ft_lstadd_back(&lst_token, new_lst);
		}
		else if (last_char(line) == '|')
		{
			new_lst = ft_lstnew("|");
			ft_lstadd_back(&lst_token, new_lst);
		}
		x++;
	}
	return (lst_token);
}
/* 
vamos a rectificar, empecemos por crear la lista sin espacios 
directions tienen que ser los ultimos */
t_list	*new_token(char *line)
{
	t_list	*lst_token;

	lst_token = pre_list(line);
/* 	lst_token = new_token_pipex(line);
	tenten(&lst_token);
	double_direction(&lst_token);
	simply_direction(&lst_token);
	printf("token final\n"); */
	show(lst_token);
	return (lst_token);
}
