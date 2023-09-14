// print_numbers.c
#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
	char digit = '0';  // Initialize digit to '0'

	while (digit <= '9')
	{
		_putchar(digit);  // Call _putchar to print the current digit
		digit++;          // Increment digit
	}

	_putchar('\n');  // Print a new line at the end
}
