#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a newline.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Recursively call with the next character */
}
