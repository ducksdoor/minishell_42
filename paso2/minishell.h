#ifndef MINISHELL_H
# define MINISHELL_H
# include <stdio.h>
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <stdlib.h>


void	main_loop(char **env);
void	head(void);
int		ft_strncmp(char *s1, char *s2, int n);
void	joke(char *line);
int		ft_strlen(char *s);
#endif