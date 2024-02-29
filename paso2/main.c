/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:21:12 by lortega-          #+#    #+#             */
/*   Updated: 2024/02/28 17:21:18 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"



void	head(void)
{
	printf("         .__         .__         .__             .__   .__   \n");
	printf("  _____  |__|  ____  |__|  ______|  |__    ____  |  |  |  |  \n");
	printf(" /     \\ |  | /    \\ |  | /  ___/");
	printf("|  |  \\ _/ __ \\ |  |  |  |  \n");
	printf("|  Y Y  \\|  ||   |  \\|  | \\___ \\ ");
	printf("|   Y  \\  ___/ |  |__|  |__\n");
	printf("|__|_|  /|__||___|  /|__|/____  >|___|  / \\___  >|____/|____/\n");
	printf("      \\/          \\/          \\/");
	printf("      \\/      \\/             \n");
	printf("                                  by fsusanna and lortega-\n");
}


void	main_loop(char **env)
{
	char	*line;
	int		x;
	pid_t	pid1;

	x = 0;
	while (1)
	{
		line = readline("\033[1;34mminishell \033[0m ▸ ");
		if (line != NULL)
		{
			pid1 = fork();
			simple_children(line, env, pid1);
			waitpid(pid1, NULL, 0);
			free (line);
		}
	}
}

int	main(int argc, char *argv[], char **env)
{
	head();
	main_loop(env);
}
