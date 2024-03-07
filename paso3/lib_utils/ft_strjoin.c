/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:05:39 by lortega-          #+#    #+#             */
/*   Updated: 2023/04/06 13:36:02 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*newstr;
	int		i;
	int		k;
	int		lens1;
	int		lens2;

	i = 0;
	k = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	newstr = malloc(lens1 + lens2 + 1);
	if (!newstr)
		return (NULL);
	while (s1[i])
		newstr[k++] = s1[i++];
	i = 0;
	while (s2[i])
		newstr[k++] = s2[i++];
	newstr[k] = '\0';
	return (newstr);
}