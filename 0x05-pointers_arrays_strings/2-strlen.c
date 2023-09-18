#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main function that calculates and
 * displays the length of a string using the _strlen function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "Hello, World!";
	int length = _strlen(str);

	_putchar('The length of the string is: ');
	_putchar(length + '0');  /* Convert integer to character */
	_putchar('\n');

	return (0);
}
