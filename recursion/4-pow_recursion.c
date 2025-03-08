#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Puts a number to power of y
 * @x: Value
 * @y: Power
 * Return: Value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
