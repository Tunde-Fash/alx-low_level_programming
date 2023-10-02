#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be printed.
 * Return: On success, the number of characters written.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to be checked.
 * Return: 1 if c is a digit, 0 otherwise.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * add_positive_numbers - Adds positive numbers.
 * @argc: The number of arguments.
 * @argv: An array of arguments as strings.
 * Return: The sum of positive numbers or an error code.
 */
int add_positive_numbers(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
	_putchar('0');
	_putchar('\n');
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	int j = 0;

	while (argv[i][j])
	{
	if (!is_digit(argv[i][j]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	j++;
	}

	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

int main(int argc, char *argv[])
{
	return (add_positive_numbers(argc, argv));
}
