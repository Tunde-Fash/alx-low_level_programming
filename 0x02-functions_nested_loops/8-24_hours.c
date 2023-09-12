#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success 1. On error -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			int hour_tens = hour / 10;
			int hour_ones = hour % 10;
			int min_tens = minute / 10;
			int min_ones = minute % 10;

			_putchar(hour_tens + '0');
			_putchar(hour_ones + '0');
			_putchar(':');
			_putchar(min_tens + '0');
			_putchar(min_ones + '0');
			_putchar('\n');
		}
	}
}
