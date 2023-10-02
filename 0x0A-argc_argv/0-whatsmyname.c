#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_program_name - Prints the program name, followed by a new line.
 * @argv: The command-line arguments.
 */
void print_program_name(char *argv[])
{
	char *program_name = argv[0];

	while (*program_name)
	{
	_putchar(*program_name);
	program_name++;
	}
	_putchar('\n');
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, otherwise an error code.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	print_program_name(argv);
	return (EXIT_SUCCESS);
	}
	else
	{
	return (EXIT_FAILURE);
	}
}
