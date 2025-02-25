#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strlen - Counts the amount of char
* @str: String
* Return: Length of string
*/
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

/**
 * rev_string - Reverse a string
 * @str: String to be reversed
 */
void rev_string(char *str)
{
	int length = _strlen(str);
	int i;
	char temp;

	for (i = 0; i < length / 2; i++)
	{
		temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
}
