#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into leet
 * @str: Input
 * Return: Changed str
 */
char *leet(char *str)
{
	int i = 0, j;

	char *original = "aAeEoOtTlL";
	char *replace  = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; j <= 10; j++)
		{
			if (str[i] == original[j])
				str[i] = replace[j];
		}
		i++;
	}
	return (str);
}
