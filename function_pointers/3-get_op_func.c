#include "3-calc.h"

/**
 * get_op_func - Sélectionne la fonction correcte en fonction de l'opérateur
 * @s: L'opérateur passé en argument
 * Return: Pointeur vers la fonction correspondant à l'opérateur, NULL sinon
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

    while (ops[i].op != NULL)
    {
        if (s[0] == ops[i].op[0] && s[1] == '\0') /* Vérifie que l'opérateur est un seul caractère */
            return (ops[i].f);
        i++;
    }

    return (NULL);
}

