#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Finds sqrt of n
 * @n: Number to find sqrt
 * Return: Search using the helper
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Helper for sqrt -> AI has been used
 * @n: Number to find sqrt
 * @guess: The guess
 * Return: The sqrt ot keep searching
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);

	if (guess * guess == n)
		return (guess);
	return (_sqrt_helper(n, guess + 1));
