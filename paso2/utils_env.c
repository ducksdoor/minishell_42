#include "minishell.h"

char    **copy_env(char **original_env)
{
    char    **new_env;
    int     ct;

    if (!original_env)
        return (NULL);
    ct = 0;
    while (original_env[ct])
        ct++;
    new_env = malloc(size(char *) * ct);
    ct = -1;
    while (original_env[++ct])
        new_env[ct] = ft_strdup(original_env[ct]);
    new_env[ct] = NULL;
    return (new_env);
}

char    **find_env_var(char *var_name, char **env)
{
    int ct;
    int var_len;

    if (!env || !var_name)
        return (NULL);
    var_len = ft_strlen(var_name);
    ct = 0;
    while (env[ct] && !ft_strncmp(var_name, env[ct], var_len))
        ct++;
    if (!env[ct] || '=' != env[ct][var_len])
        return (NULL);
    return (&(env[ct]));
}

char    **add_change_env_var(char *var_name, char *new_val, char **env)
{
    int ct;
    char    **old_var_ptr;
    char    *new_var_ptr1;
    char    *new_var_ptr2;

    new_var_ptr1 = ft_strjoin(var_name, "=");
    if (!new_var_ptr1)
        return (NULL);
    new_var_ptr2 = ft_strjoin(new_var_ptr1, new_val);
    free(new_var_ptr1)
    if (!new_var_ptr2)
        return (NULL);
    old_var_ptr = find_env_var(var_name, env);
    if (!old_var_ptr)
        old_var_ptr = change_env_len(env, 1);
    if (!old_var_ptr)
    {
        free(new_var_ptr2);
        return (NULL);
    }
    /*PUNTO MUERTO... Me parece que va a hacer falta meter el **env en una 
    estructura o bien pasar un triple puntero, porque el doble puntero hay que 
    modificarlo al añadir una variable nueva o al borrar una variable.*/
}
/*
char    *del_env_var(char *var, char **env)
*/