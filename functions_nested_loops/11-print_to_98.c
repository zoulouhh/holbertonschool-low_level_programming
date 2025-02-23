#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints the numbers to go to 98
 * @current_number: Number to start from
 */
void print_to_98(int current_number)
{
	while (current_number != 98)
	{
		printf("%d", current_number);
		printf(", ");
		if (current_number > 98)
		{
			current_number--;
		}
		else
		{
			current_number++;
		}
	}
	printf("98\n");
}
