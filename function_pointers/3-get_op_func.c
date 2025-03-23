#include <stdio.h>  /* Pour printf */
#include <stdlib.h> /* Pour exit */

/**
 * op_div - divise deux nombres entiers
 * @a: premier nombre
 * @b: deuxième nombre
 * Return: quotient de a par b
 */
int op_div(int a, int b)
{
	if (b == 0) /* Vérifier avant toute opération */
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - retourne le reste de la division entière
 * @a: premier nombre
 * @b: deuxième nombre
 * Return: reste de la division de a par b
 */
int op_mod(int a, int b)
{
	if (b == 0) /* Vérifier avant toute opération */
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

