#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks if a char is uppercase
 * @c: ASCII Number of a char
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
