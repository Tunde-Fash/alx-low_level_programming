#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * puts_half - Print the second half of a string, followed by a new line.
 * @str: The string to print.
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
