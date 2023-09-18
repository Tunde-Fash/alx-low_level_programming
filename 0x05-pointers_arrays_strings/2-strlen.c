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

	_putchar('T');
	_putchar('h');
	_putchar('e');
	_putchar(' ');
	_putchar('l');
	_putchar('e');
	_putchar('n');
	_putchar('g');
	_putchar('t');
	_putchar('h');
	_putchar(' ');
	_putchar('o');
	_putchar('f');
	_putchar(' ');
	_putchar('t');
	_putchar('h');
	_putchar('e');
	_putchar(' ');
	_putchar('s');
	_putchar('t');
	_putchar('r');
	_putchar('i');
	_putchar('n');
	_putchar('g');
	_putchar(' ');
	_putchar('i');
	_putchar('s');
	_putchar(':');
	_putchar(' ');
	_putchar(length + '0');  /* Convert integer to character */
	_putchar('\n');

	return (0);
}
