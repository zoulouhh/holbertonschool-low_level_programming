#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Prints from 00:00 to 23:59
 *
 * Return: None
 */
void jack_bauer(void)
{
	int current_hour;
	int current_minute;

	current_hour = 0;
	current_minute = 0;
	while (current_hour < 24)
	{
		_putchar((current_hour / 10) + '0');
		_putchar((current_hour % 10) + '0');
		_putchar(':');
		_putchar((current_minute / 10) + '0');
		_putchar((current_minute % 10) + '0');
		_putchar('\n');
		current_minute++;
		if (current_minute >= 60)
		{
			current_minute = 0;
			current_hour++;
		}
	}
}
