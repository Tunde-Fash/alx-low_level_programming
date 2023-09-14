#include "main.h"

/* Prototype for _putchar (you should have this function defined somewhere) */
int _putchar(char c);

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + (i / 10)); /* Print the tens digit */
			}
			_putchar('0' + (i % 10)); /* Print the ones digit */
		}
		_putchar('\n'); /* Print a newline after each set of numbers */
	}
}
