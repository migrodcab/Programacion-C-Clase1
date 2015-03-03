/* Creando una variable local de nombre "valor". Comprobar si dicha variable
 * es mayor que 5, si es así imprimir un mensaje usando printf confirmando
 * que es mayor. En caso contrario, escribir un mensaje
 */

/* Bibliotecas a incluir */
#include <stdio.h>

void main(void) {
	/* Declaración de variables */
	int num = 3;

	/* Código usando condicional if */
	if (num>5) 
		printf("num es mayor que 5\n");
	 else 
		printf("num NO es mayor que 5\n");
	
}
