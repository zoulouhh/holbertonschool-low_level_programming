#include "main.h"

/**
 * _islower - Checks if a letter is lowercase.
 * @c: The letter
 *
 * Return: 1 when c is lowercase, 0 when letter is uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
