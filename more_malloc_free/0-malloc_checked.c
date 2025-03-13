#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function causes normal process termination
 *         with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b); /* Allocate memory */
	if (ptr == NULL) /* Check if malloc failed */
	{
	exit(98); /* Exit with status 98 if allocation fails */
	}

	return (ptr); /* Return the allocated memory pointer */
}

