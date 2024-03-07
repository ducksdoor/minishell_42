/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrplus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:26:34 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/16 08:48:51 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ft_strchrplus(char *s, char *c)
{
	int		x;
	int		y;

	x = 0;
	y = ft_strlen(s);
	while (x <= y)
	{
		if (s[x] == c[0])
		{
			if (s[x + 1] == c[1])
				return (1);
		}
		++x;
	}
	return (0);
}

int	ft_strchrplusplus(char *s, char *c)
{
	int		x;
	int		y;

	x = 0;
	y = ft_strlen(s);
	while (x <= y)
	{
		if (s[x] == c[0])
		{
			if (s[x + 1] == c[1])
			{
				if (s[x + 2] == c[2])
					return (1);
			}
		}
		++x;
	}
	return (0);
}
