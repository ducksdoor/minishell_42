/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:26:34 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/16 08:48:51 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ft_strchr(char *s, int c)
{
	int		x;
	int		y;

	x = 0;
	y = ft_strlen(s);
	while (x <= y)
	{
		if (s[x] == (char)c)
		{
			return (1);
		}
		++x;
	}
	return (0);
}
