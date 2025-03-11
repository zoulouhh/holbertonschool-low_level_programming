#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a given string into a newly allocated memory space.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation fails
 *         or if str is NULL.
 */
char *_strdup(char *str)
{
    char *duplicate;
    size_t len;

    // Check if the input string is NULL
    if (str == NULL)
        return (NULL);

    // Calculate the length of the input string including null terminator
    len = strlen(str) + 1;

    // Allocate memory for the duplicate string
    duplicate = malloc(len);
    if (duplicate == NULL)
        return (NULL);

    // Copy the original string into the newly allocated memory
    memcpy(duplicate, str, len);

    return (duplicate);
}
