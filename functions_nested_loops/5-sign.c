#include "main.h"

/**
 * print_sign - Print the sign of the number
 * @n: Number
 *
 * Return: 1 if number is positive, 0 if it's 0, -1 if the number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (-1);
}
