#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_arguments - Prints all the arguments received, one per line
 * @argc: The number of arguments
 * @argv: An array of strings containing the arguments
 *
 * Description: This function prints all the arguments received, including the
 * first one, each on a separate line.
 */
void print_arguments(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	int j;

	for (j = 0; argv[i][j] != '\0'; j++)
	{
	_putchar(argv[i][j]);
	}
	_putchar('\n');
	}
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	print_arguments(argc, argv);

	return (0);
}
