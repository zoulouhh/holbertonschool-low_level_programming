#include "3-calc.h"

/**
 * get_op_func - Sélectionne la fonction correspondant à l'opérateur
 * @s: L'opérateur passé en argument
 * Return: Pointeur vers la fonction correspondante ou NULL si invalide
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
		if (*s == *(ops[i].op) && s[1] == '\0')
			return (ops[i].f);
		else
			i++;

	return (NULL);
}

