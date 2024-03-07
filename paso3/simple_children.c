/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_children.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:22:57 by lortega-          #+#    #+#             */
/*   Updated: 2023/09/06 21:23:01 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	simple_children(char *line, char **env, pid_t pid1)
{
	if (pid1 == 0)
	{
		ft_exe(line, env);
		ft_error("exe");
	}
}
