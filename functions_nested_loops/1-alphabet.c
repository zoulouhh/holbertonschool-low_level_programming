#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: None
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
