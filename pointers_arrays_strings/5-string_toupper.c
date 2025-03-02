#include "main.h"

/**
 *  * string_toupper - Converts a string to uppercase.
 *   * @str: String to be changed
 *    * Return: ptr to str
 *     */
char *string_toupper(char *str)
{
		int i = 0;

			while (str[i] != '\0')
					{
								if (str[i] >= 'a' && str[i] <= 'z')
												str[i] = str[i] - 32;
										i++;
											}
				return (str);
}
