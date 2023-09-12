#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract and print the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n; // Make it positive temporarily

	last_digit = n % 10;
	_putchar(last_digit + '0');

	if (n < 0)
		last_digit = -last_digit; // If n was negative, make last_digit negative

	return (last_digit);
}
