
Lista de pasos realizados para hacer la minishell:

--->He añadido los utils que use en pipex para poder encontrar los comandos en las rutas absolutas
---->He añadido el mismo archivo de protecciones del pipex.


2: Ahora vamos a añadirle funcionalidad, es decir, utilizaremos el pipex (si estas haciendo el cursus del 42 y has realizado ese proyecto).
	En caso de no tener el pipex, intenta abrir la minishell y que esta pueda usar comandos ya existentes.
	




Hablemos de la funcion main---> int	main(int argc, char *argv[], char **env)
	- Aunque es obvio no puedes crear funciones main de cualquier tipo, existen dos posibilidades: 
		-	int main(void)
		-	int main(int argc, char *argv[])

He creado utils_env.c con las funciones:
char    **copy_env(char **original_env)
char    **find_env_var(char *var_name, char **env)
char    **add_change_env_var(char *var_name, char *new_val, char **env)
char    *del_env_var(char *var, char **env)

En la tercera me he parado por lo que indico en el comentario:

/*PUNTO MUERTO... Me parece que va a hacer falta meter el **env en una
    estructura o bien pasar un triple puntero, porque el doble puntero hay que
    modificarlo al añadir una variable nueva o al borrar una variable.*/



