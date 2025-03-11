#include <stdlib.h>

/**
 * _strdup - Duplicates a given string into a newly allocated memory space.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string
 *         or if str is NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len, i;

    /* Check if the input string is NULL */
	if (str == NULL)
	return (NULL);

    /* Calculate the length of the input string */
	for (len = 0; str[len]; len++)
	;

    /* Allocate memory for the duplicate string (including null terminator) */
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
	return (NULL);

    /* Copy the original string into the newly allocated memory */
	for (i = 0; i <= len; i++)
	duplicate[i] = str[i];

	return (duplicate);
}
