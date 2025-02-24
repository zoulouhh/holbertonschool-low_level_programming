#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: Triangle size
 */
void print_triangle(int size)
{
	int i, j, k;
	int spaces = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
			spaces--;
		}

		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
