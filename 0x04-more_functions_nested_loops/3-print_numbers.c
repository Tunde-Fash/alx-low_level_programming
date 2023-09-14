#include "main.h"
#include <unistd.h> // Include the unistd.h header for the write function

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1, and errno is set appropriately.
 */
/* Define the _putchar function (assuming it's already implemented) */
int _putchar(char c);
{
    return write(1, &c, 1);
}


/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
