#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_last_digit - Prints the last digit of a number and returns it
 * @n: The input number
 *
 * Return: The last digit of the number 'n'.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;  // Special case for INT_MIN
	}
	else
	{
		if (n < 0)
			n = -n; /* Make sure n is positive */

		last_digit = n % 10;
	}

	_putchar(last_digit + '0'); /* Print the last digit as a character */

	return last_digit;
}

