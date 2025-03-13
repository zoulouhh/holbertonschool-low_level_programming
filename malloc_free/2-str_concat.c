#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory
 *         containing the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get lengths of strings */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for concatenated string */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into new string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Append s2 to new string */
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];

	/* Add null terminator */
	concat[i] = '\0';

	return (concat);
}                                               
