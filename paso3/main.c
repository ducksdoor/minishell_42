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

/* no se esta liberando la lista  */
void	main_loop(char **env)
{
	char	*line;
	t_list	*lst_token;
	pid_t	pid1;
	int		x;

	while (1)
	{
		line = readline("\033[1;34mminishell \033[0m ▸ ");
		if (line != NULL)
		{
			x = 0;
			lst_token = new_token(line);
			while (lst_token->next != NULL)
			{
				printf("%d\n", x);
				x++;
				pid1 = fork();
				simple_children(lst_token->content, env, pid1);
				waitpid(pid1, NULL, 0);
				lst_token = lst_token->next;
			}
			free (line);
		}
	}
}

int	main(int argc, char *argv[], char **env)
{
	head();
	main_loop(env);
}
