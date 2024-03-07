/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirect.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:47:32 by lortega-          #+#    #+#             */
/*   Updated: 2023/09/17 00:47:45 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* tiene un bucle while que creo que es innecesario la verdad, pero al quitarlo segmentation fault que te crio... por  ahora se queda */
void	redirect(t_list **aux, char **new_modulo, char *symbol)
{
	int		x;
	t_list	*aux_aux;
	t_list	*new_nod;
	t_list	*last_aux;

	aux_aux = *aux;
	last_aux = (*aux)->next;
	x = 1;
	aux_aux->content = new_modulo[0];
	while (new_modulo[x] != NULL)
	{
		new_nod = ft_lstnew(ft_strjoin(symbol, ft_strtrim(new_modulo[x], " ")));
		aux_aux->next = new_nod;
		ft_lstadd_back(&aux_aux, last_aux);
		x++;
	}
}

/* Hay un problema cuando se usa > y >> en el mismo str sin separar pues no son capaces de elegir uno u otro. la idea es dejar esto como ultimo paso. para que nunca esten juntos, por ahora  */
void	simply_direction(t_list **lst_token)
{
	t_list	*aux;
	char	*char_aux;
	char	**nuevo_modulo;

	aux = *lst_token;
	while (aux != NULL)
	{
		char_aux = aux->content;
		if (ft_strchrplus(char_aux, "> ") == 1)
		{
			nuevo_modulo = ft_protsplit(char_aux, '>');
			redirect(&aux, nuevo_modulo, ">");
		}
		else if (ft_strchrplus(char_aux, "< ") == 1)
		{
			nuevo_modulo = ft_protsplit(char_aux, '<');
			redirect(&aux, nuevo_modulo, "<");
		}
		aux = aux->next;
	}
}

void	double_direction(t_list **lst_token)
{
	t_list	*aux;
	char	*char_aux;
	char	**nuevo_modulo;

	aux = *lst_token;
	while (aux != NULL)
	{
		char_aux = aux->content;
		if (ft_strchrplusplus(char_aux, ">> ") == 1)
		{
			nuevo_modulo = ft_protsplit(char_aux, '>');
			redirect(&aux, nuevo_modulo, ">>");
		}
		else if (ft_strchrplusplus(char_aux, "<< ") == 1)
		{
			nuevo_modulo = ft_protsplit(char_aux, '<');
			redirect(&aux, nuevo_modulo, "<<");
		}
		aux = aux->next;
	}
}
