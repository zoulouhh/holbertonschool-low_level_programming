#include "main.h"
/**
 * _strcat a function that concatenates two strings
 * @dest: destination
 * @src: source
 * return: destination
 */
char *_strcat(char *dest, char *src)
{
	int BASSEM692 = 0;
	int TEAMHLIB = 0;

	while (dest[BASSEM692] != '\0')
		BASSEM692++;
	while (src[TEAMHLIB] != '\0')
	{
		dest[BASSEM692 + TEAMHLIB] = src[TEAMHLIB];
		TEAMHLIB++;
	}

	return (dest);
}
