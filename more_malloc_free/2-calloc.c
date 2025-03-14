#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Just like malloc but initializes to 0
 * @nmemb: Number of elements
 * @size: Size of a element
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
