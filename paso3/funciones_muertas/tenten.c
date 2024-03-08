/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tenten.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:47:32 by lortega-          #+#    #+#             */
/*   Updated: 2023/09/17 00:47:45 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

static void	comillas(t_list **aux, char **new_modulo)
{
	t_list	*aux_aux;
	int		x;
	t_list	*last_aux;
	char	*char_aux;

	x = 1;
	aux_aux = *aux;
	last_aux = (*aux)->next;
	char_aux = ft_strjoin("\"", new_modulo[0]);
	char_aux = ft_strjoin(char_aux, "\"");
	aux_aux->content = char_aux;
	while (new_modulo[x] != NULL)
	{
		aux_aux->next = ft_lstnew(new_modulo[x]);
		x++;
	}
	ft_lstadd_back(&aux_aux, last_aux);
}

void	tenten(t_list **lst_token)
{
	t_list	*aux;
	char	*char_aux;
	char	**nuevo_modulo;

	aux = *lst_token;
	while (aux != NULL)
	{
		char_aux = ft_strtrim(aux->content, " ");
		if (ft_strchr(char_aux, '\"') == 1)
		{
			nuevo_modulo = ft_protsplit(char_aux, '"');
			comillas(&aux, nuevo_modulo);
		}
		aux = aux->next;
	}
}
