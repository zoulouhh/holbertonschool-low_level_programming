#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a reversed string in recursive
 * @s: String to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
