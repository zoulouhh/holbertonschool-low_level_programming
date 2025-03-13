#include "main.h"
#include <stdlib.h> /* For malloc */
#include <stddef.h> /* For size_t */

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to newly allocated memory containing concatenated string,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int len1 = 0, len2 = 0, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate lengths of s1 and s2 */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* Allocate memory for concatenated string */
    concat = malloc(sizeof(char) * (len1 + len2 + 1));
    if (concat == NULL)
        return (NULL);

    /* Copy s1 into concat */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copy s2 into concat */
    for (j = 0; j < len2; j++, i++)
        concat[i] = s2[j];

    /* Null-terminate the concatenated string */
    concat[i] = '\0';

    return (concat);
}
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                        
~                                               
