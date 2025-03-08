#include "main.h"
#include <stdio.h>

/**
 * check_prime - Helper prime
 * @n: Number to check
 * @d: Divisor to check
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int d)
{
	if (d * d > n)
		return (1);
	if (n % d == 0)
		return (0);
	return (check_prime(n, d + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: Number to be checked
 * Return: Recursive
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
