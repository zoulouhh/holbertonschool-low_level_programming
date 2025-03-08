#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Counts the strlen recursively
 * @s: String
 * Return: idk how to explain
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
