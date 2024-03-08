/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_token_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:47:32 by lortega-          #+#    #+#             */
/*   Updated: 2023/09/17 00:47:45 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/*ojear esto tranquilamente ! los tiros van por aqui seguro!*/
static void	comprobation(t_list **worklst)
{
	int		bool;
	int		position;
	t_list	*aux;
	t_list	*borrar;

	aux = *worklst;
	bool = 0;
	position = 0;
	while (aux)
	{
		borrar = aux->next;
		if (ft_strchr(aux->content, '\"') == 1)
		{
			position = 1;
			while (position == 1 )
			{
				if (ft_compare_last_char(aux->content, '\"') == 1 && ((char *)aux->content)[1] != '\0')
					position == 0;
				else if (((char *)aux->content)[1] == '\0')
				{
					aux->content = ft_strjoin(aux->content, aux->next->content);
					aux->next = aux->next->next;
					free(borrar);
				}
				else if (ft_strchr(aux->next->content, '\"') == 1)
				{

				}
				else
					position = 0;
			}
		}
		/*esto tiene que estar en el bucle para evistar contar hacia atras*/
		if (ft_strchr(aux->content, '\"') == 0)
		{
			if (((char *)aux->content)[1] == '\0')
			{
				aux->content = ft_strjoin(aux->content, aux->next->content);
				aux->next = aux->next->next;
				free(borrar);
			}
		}
		if (ft_strchr(aux->content, '\"') == 1 && position == 1)
			position = 0
		aux = aux->next;
	}
}

t_list	*pre_list(char *line)
{
	char	**pre_result;
	t_list	*result;
	int		x;

	x = 1;
	result = NULL;
	pre_result = ft_protsplit(line, ' ');
	result = ft_lstnew(pre_result[0]);
	while (pre_result[x])
	{
		ft_lstadd_back(&result, ft_lstnew(pre_result[x]));
		x++;
	}
	comprobation(&result);
	return (result);
}
