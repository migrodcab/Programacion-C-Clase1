/* Creando una variable local de nombre "len". Crear una variable local de
 * tipo cadena de caracteres que se llame "cadena". Aumentar el valor de "len"
 * mientras que no se encuentre el caracter '\0' en la posicion cadena[i].
 */

/* Bibliotecas a incluir */
#include <stdio.h>

void main(void) {
	/* Declaración de variables */
	int len = 0;
	char cadena[10] = "Cadena\0";
	
	/* Código usando while*/
	while (cadena[len] != '\0') {
		len++;
	}
	printf("len es igual a %d\n", len);
}
