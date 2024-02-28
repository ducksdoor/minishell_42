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


/* en esta función uso env " a lo bruto ", es por probar que metemos el env dentro de la funcion, pero realmente esto no puede quedarse asi, si no que la minishell tiene que buscar los comandos */
/* el else if que esta vacio hace que si no hay nada escrito no haga nada. pero por ahora esta un poco feo */
void	main_loop(char **env)
{
	char	*line;
	int		x;

	x = 0;
	while (1)
	{
		line = readline("\033[1;34mminishell \033[0m ▸ ");
		if (ft_strncmp(line, "make", 4) == 0)
			joke(line);
		else if (ft_strncmp(line, "env", 3) == 0)
		{
			while (env[x] != NULL)
			{
				printf("%s\n", env[x]);
				x++;
			}
		}
		else if (line == NULL || ft_strlen(line) == 0)
		{
		}
		else
			printf("minishell command not found %s\n", line);
		free (line);
	}
}


int	main(int argc, char *argv[], char **env)
{
	head();
	main_loop(env);
}



