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
	t_list	*new_nod;
	t_list	*last_aux;
	char	*char_aux;

	aux_aux = *aux;
	last_aux = (*aux)->next;
	char_aux = ft_strjoin("\n", new_modulo[0]);
	char_aux = ft_strjoin(char_aux, "\n");
	aux_aux->content = char_aux;
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
		char_aux = aux->content;
		if (ft_strchrplus(char_aux, "\"") == 1)
		nuevo_modulo = ft_protsplit(char_aux, '\"');
		comillas(&aux, nuevo_modulo);
		aux = aux->next;
	}
}
