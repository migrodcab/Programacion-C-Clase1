/* Realizar el ejercicio que hemos realizado con while pero usando
 * el bucle for
 */


/* Bibliotecas a incluir */
#include <stdio.h>

void main(void) {
	/* Declaración de variables */
	int len;
	char cadena[10] = "Cadena\0";

	/* Código usando condicional while */
	for (len = 0; cadena[len] != '\0'; len++);
	
	printf("len es igual a %d\n", len);
}
