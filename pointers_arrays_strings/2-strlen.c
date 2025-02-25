#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int length = 0;

    while (s[length] != '\0')  // Loop until we reach the null terminator
    {
        length++;
    }
    
    return length;
}
