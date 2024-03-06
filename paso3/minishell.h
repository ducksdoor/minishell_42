
#ifndef MINISHELL_H
# define MINISHELL_H
# include <stdio.h>
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <stdlib.h>
# include <errno.h>
# include <fcntl.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	main_loop(char **env);
void	head(void);
int		ft_is_absolute(char **cmd);
char	*ft_search2(char *object, char *command);
char	*ft_search(char **env, char *cmd);
void	ft_exe(char *command, char **envp);
int		ft_open(char *file, int x);
char	**ft_protsplit(char *str, char c);
char	*ft_protstrjoin(char *s1, char *s2);
int		protect_loop(int fd, char *line, char *argv);
void	ft_error(char *texto);
void	simple_children(char *line, char **env, pid_t pid1);

int		ft_strlen(char *s);
char	*ft_substr(char *s, int start, int len);
char	*ft_strdup(char *src);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);

t_list	*new_token_pipex(char *line);
t_list	*new_token(char *line);
void	direction(t_list **lst_token);
#endif