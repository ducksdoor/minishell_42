
Lista de pasos realizados para hacer la minishell:

1 : vamos a hacer una aproximación que nos acerque al funcionamiento de la minishell. Simplemente crear un programa que "devuelva" lo que escribes.


NOTAS:

Hablemos sobre: "funcion READLINE"
	Esta función reserva de forma dinámica un espacio en la memoria, por tanto siempre que se use se tendras que hacer un free.

hablemos sobre: (\033[1;34m y \033[0m)

- \033: 
	Este es el carácter de escape en octal (también conocido como código ASCII 27 o "ESC"). Indica que lo que sigue es una secuencia de escape.
- [: 
	Este es el comienzo de la secuencia de escape ANSI.
- 1;34m: 
	Esta parte específica controla el color del texto. Aquí, 1;34 se divide en dos partes:
	- 1: 
		Esto indica que el texto debe estar en negrita.
	- 34: 
		Esto indica que el color del texto debe ser azul claro.
- m: 
	Indica el final de la secuencia de control de formato de texto. La letra "m" es el código de control que indica que la secuencia de escape ha terminado y que cualquier texto que siga se mostrará según las especificaciones establecidas en la secuencia de escape.
- \033: 
	Esta es otra secuencia de escape, que se usa para restablecer cualquier formato de texto que se haya cambiado previamente.
- [0m: 
	Esta secuencia específica ([0m) se utiliza comúnmente para restablecer el formato de texto a sus valores predeterminados, lo que incluye el color.