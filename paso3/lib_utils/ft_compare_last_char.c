/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_last_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:21:12 by lortega-          #+#    #+#             */
/*   Updated: 2024/02/28 17:21:18 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ft_compare_last_char( char *s, int c)
{
	int	y;

	y = ft_strlen(s) - 1;
	if (y < 0)
		return (NULL);
	if (s[y] == (char)c)
		return (1);
	return (0);
}