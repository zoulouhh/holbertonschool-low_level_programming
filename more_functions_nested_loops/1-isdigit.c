#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if a number is a int
 * @c: Char to check
 *
 * Return: 1 If digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
