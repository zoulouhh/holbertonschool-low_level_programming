#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: ?
 * @needle: ?
 * Return: First occurrence of the substring needle in the string haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		i = 0;

		while (needle[i] != '\0' && haystack[i] != '\0' &&
				needle[i] == haystack[i])
			i++;

		if (needle[i] == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
