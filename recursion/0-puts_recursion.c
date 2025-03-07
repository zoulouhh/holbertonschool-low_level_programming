#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string recursively
 * @s: String to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_puts_recursion(s + 1);
	_putchar(*s);
}
