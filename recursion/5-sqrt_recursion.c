#include "main.h"

/**
 * _sqrt_helper - Recursive helper function to find square root
 * @n: The number to find the square root of
 * @guess: The current guess
 *
 * Return: The natural square root if found, -1 otherwise
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
	return (-1);
	if (guess * guess == n)
	return (guess);
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (_sqrt_helper(n, 0));
}
