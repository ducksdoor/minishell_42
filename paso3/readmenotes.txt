
Lista de pasos realizados para hacer la minishell:

---->vamos a tokenizar las entradas.

---- Hablemos de '>':

	En Bash, el operador de redirección > se utiliza para redirigir la salida estándar de un comando hacia un archivo. 
	Es necesario dejar un espacio entre el operador de redirección > y el nombre del archivo al que deseas redirigir la salida.

	Por ejemplo:
	Para redirigir la salida del comando ls hacia un archivo llamado listado.txt, deberías hacerlo de esta manera:

	ls > listado.txt

	Si no dejas un espacio:
	el operador de redirección > será considerado parte del nombre del archivo, lo que causará un error. 
	Por ejemplo, el siguiente comando daría un error:

	ls>listado.txt
	Esto se interpretará como si intentaras ejecutar el comando ls> seguido de listado.txt, lo cual no es válido en la sintaxis de Bash. 



AHORA, añadiremos este simbolo '<'
	- Los símbolo < y > tienen funciones opuestas en Bash:

	< (Redirección de entrada): El símbolo < se utiliza para redirigir la entrada estándar de un comando. 
	Esto significa que toma el contenido de un archivo y lo proporciona como entrada al comando.

	Por ejemplo:
	comando < archivo.txt
	En este caso, el contenido del archivo archivo.txt se proporcionará como entrada al comando comando.

	> (Redirección de salida): Por otro lado, el símbolo > se utiliza para redirigir la salida estándar de un comando. 
	Esto significa que toma la salida de un comando y la escribe en un archivo, sobrescribiendo el contenido del archivo si ya existe.

	Por ejemplo:
	comando > archivo.txt
	En este caso, la salida del comando comando se escribirá en el archivo archivo.txt. 
	Si el archivo ya existe, se sobrescribirá su contenido.

	En resumen:
	< se utiliza para proporcionar entrada a un comando desde un archivo.
	> se utiliza para redirigir la salida de un comando hacia un archivo.

