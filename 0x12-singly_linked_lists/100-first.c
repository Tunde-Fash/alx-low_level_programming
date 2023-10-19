#include "lists.h"

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, 1; on error, -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_before_main - prints the specified text before the main function is executed
 */
void print_before_main(void)
{
	char *text = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	int i;

	for (i = 0; text[i]; i++)
		_putchar(text[i]);
}

