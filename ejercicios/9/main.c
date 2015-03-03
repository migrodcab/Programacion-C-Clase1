#include <assert.h>
#include "utils.h"

static int test1(void)
{
	printf("TEST 1:\n");
	printf("----- Prueba de la funcion 1 -----\n");

	char cadena1[10] = "cadena\0";
	int res1 = cuenta_numero_letras(cadena1, 'a');
	assert(res1 == 2);
	printf("Resultado de la funcion 1: %d\n", res1);

	printf("----- Prueba de la funcion 2 -----\n");
	
	char cadena2[10] = "cadena\0";
	char cadena3[10] = "hola\0";
	int res2 = compara_cadena(cadena1, cadena2);
	int res3 = compara_cadena(cadena1, cadena3);
	assert(res2 == 1);
	printf("Resultado de la funcion 2 (si las cadenas son iguales) es: %d\n", res2);
	assert(res3 == 0);
	printf("Resultado de la funcion 2 (si las cadenas son distintas) es: %d\n", res3);

	printf("----- Prueba de la funcion 3 -----\n");	

	char a = 'a';
	char c = 'c';
	char e = 'e';
	char otro = 'b';
	int resA = tipo_de_letra(a);
	int resC = tipo_de_letra(c);
	int resE = tipo_de_letra(e);
	int resOtro = tipo_de_letra(otro);
	assert(resA == 1);
	printf("Resultado de la funcion 3 (si la letra es a) es: %d\n", resA);
	assert(resC == 2);
	printf("Resultado de la funcion 3 (si la letra es c) es: %d\n", resC);
	assert(resE == 3);
	printf("Resultado de la funcion 3 (si la letra es e) es: %d\n", resE);
	assert(resOtro == 0);
	printf("Resultado de la funcion 3 (si la letra no es ni a, c o e) es: %d\n", resOtro);
}


static int test2(void)
{
	printf("TEST 2:\n");

	printf("----- Prueba de la funcion 4 -----\n");
	char cadena[10] = "cadena\n";
	int res4 = primera_letra(cadena, 'a');
	assert(res4 == 1);
	printf("Resultado de la funcion 4 es: %d\n", res4);

	printf("----- Prueba de la funcion 6 -----\n");
	int n = 3;
	int m = 7;
	int res6 = suma_numeros(n, m);
	assert( res6 == 10);
	printf("Resultado de la funcion 6 es: %d\n", res6);
}


static int test3(void)
{
	printf("TEST 3:\n");

	printf("----- Prueba de la funcion 7 -----\n");
	int n = 7;
	int m = 3;
	int res7 = resta_numeros(n,m);
	assert(res7 == 4);
	printf("Resultado de la funcion 7 es: %d\n", res7);

	printf("----- Prueba de la funcion 8 -----\n");
	
	int res8 = multiplican_numeros(n, m);
	assert( res8 == 21);
	printf("Resultado de la funcion 8 es: %d\n", res8);
}

void main(void)
{
	test1();
	test2();
	test3();

	printf("----- Prueba de la funcion 5 -----\n");
	
	char cadena[10] = "cadena\0";
	printf("Cadena antes de la funcion 5: %s\n", cadena);
	cambia_letras(cadena, 'a', 'o');
	printf("Cadena despues de la funcion 5: %s\n", cadena);
	
	
}
