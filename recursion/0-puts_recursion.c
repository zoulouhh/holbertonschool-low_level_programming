#include <stdio.h>
#include "main.h"

int _putchar(char c); /* Function prototype for _putchar */

/**
 * _puts_recursion - Prints a string recursively
 * @s: String to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
