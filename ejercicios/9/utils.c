#include <stdio.h>
#include <string.h>

int cuenta_numero_letras(char cadena[], char letra)
{
	int i;
	int res = 0;
	for (i = 0; i < strlen(cadena); i++) {
		if (cadena[i] == letra)
			res++;
	}
	return res;
}

int compara_cadena(char *cadena1, char *cadena2)
{
	if (strcmp(cadena1, cadena2) == 0)
		return 1;
	else
		return 0;
}

int tipo_de_letra (char letra)
{
	switch (letra) {
	case 'a':
		return 1;
		break;
	case 'c':
		return 2;
		break;
	case 'e':
		return 3;
		break;
	default:
		return 0;
		break;
	}
}

int primera_letra(char cadena[], char letra)
{
	int i;
	for (i = 0; i < strlen(cadena); i++) {
		if (cadena[i] == letra) {
			return i;
			break;
		}
	}
}

int cambia_letras(char cadena[], char letraoriginal, char letracambiar)
{
	int i;
	for (i = 0; i < strlen(cadena); i++) {
		if (cadena[i] == letraoriginal) {
			cadena[i] = letracambiar;
		}
	}
}

int suma_numeros (int n, int m){
	return n + m;
}

int resta_numeros (int n, int m){
	return n-m;
}

int multiplican_numeros (int n, int m){
	return n*m;
}
