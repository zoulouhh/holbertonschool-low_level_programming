#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string
 */
void print_rev(char *s)
{
    int length = 0;

    // First, find the length of the string
    while (s[length] != '\0')
    {
        length++;
    }

    // Now, print the string in reverse order
    for (length = length - 1; length >= 0; length--)
    {
        _putchar(s[length]);  // Assuming _putchar is used to print characters
    }

    _putchar('\n');  // Print the new line at the end
}

