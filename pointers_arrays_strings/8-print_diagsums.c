#include "main.h"
#include <stdio.h>

/**
 *  * print_diagsums - Prints the sum of the two diagonals of a matrix
 *   * @a: Matrix
 *    * @size: Size of matrix
 *     */
void print_diagsums(int *a, int size)
{
		int i = 0, sum = 0, sum2 = 0;

			for (i = 0; i < size; i++)
					{
								sum += a[i * size + i];
										sum2 += a[i * size + (size - 1 - i)];
											}

				printf("%d, %d\n", sum, sum2);
}
