#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * count_arguments - Counts the number of arguments passed into the program
 * @argc: The argument count
 *
 * Return: The number of arguments
 */
int count_arguments(int argc)
{
	return (argc - 1);
}

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_args;

	num_args = count_arguments(argc);

	_putchar(num_args + '0');
	_putchar('\n');

	return (0);
}
