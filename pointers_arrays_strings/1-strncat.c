#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *  * _strncat - Appends the `src` string to the `dest` string
 *   * @dest: Destination string
 *    * @src: Source string
 *     * @n: Bytes amount
 *      * Return: Destination pointer
 *       */
char *_strncat(char *dest, char *src, int n)
{
		int dI = 0, sI = 0;

			while (dest[dI] != '\0')
						dI++;

				while (src[sI] != '\0' && n > sI)
						{
									dest[dI + sI] = src[sI];
											sI++;
												}

					return (dest);
}
