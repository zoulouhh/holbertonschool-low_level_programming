#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed by dest
 * @dest: Pointer to the destination
 * @src: Pointer to the source
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *pDest = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (pDest);
}
