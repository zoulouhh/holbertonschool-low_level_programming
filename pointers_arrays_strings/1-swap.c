#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap two integers
 * @a: Number one
 * @b: Number two
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
