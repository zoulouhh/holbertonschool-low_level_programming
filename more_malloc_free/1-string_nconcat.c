#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to include from s2.
 *
 * Return: A pointer to the newly allocated memory containing the concatenated
 *         string. If malloc fails, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Treat NULL strings as empty strings */
    if (s1 != NULL)
        len1 = strlen(s1);
    if (s2 != NULL)
        len2 = strlen(s2);

    /* Use the full length of s2 if n is greater than or equal to len2 */
    if (n >= len2)
        n = len2;

    /* Allocate memory for the concatenated string */
    concat = malloc(len1 + n + 1); /* +1 for the null terminator */
    if (concat == NULL)
        return (NULL); /* Return NULL if malloc fails */

    /* Copy s1 into the new memory */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copy up to n bytes of s2 into the new memory */
    for (j = 0; j < n; j++)
        concat[i + j] = s2[j];

    /* Null terminate the new string */
    concat[i + j] = '\0';

    return (concat);
}

