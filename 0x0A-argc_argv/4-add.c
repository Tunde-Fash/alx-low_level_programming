#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string is a positive integer.
 * @str: The input string to check.
 *
 * Return: 1 if the string is a positive integer, 0 otherwise.
 */
int is_digit(char *str)
{
	if (!str)
	return (0);

	while (*str)
	{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
	}

	return (1);
}

/**
 * str_to_int - Convert a string to an integer.
 * @str: The string to convert.
 *
 * Return: The integer value of the string.
 */
int str_to_int(char *str)
{
	int result = 0;

	while (*str)
	{
	result = result * 10 + (*str - '0');
	str++;
	}

	return (result);
}

/**
 * add_positive_numbers - Add positive numbers from command line arguments.
 * @argc: The number of command line arguments.
 * @argv: An array of command line arguments as strings.
 *
 * Return: 0 if successful, 1 if an error occurred.
 */
int add_positive_numbers(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (int i = 1; i < argc; i++)
	{
	if (is_digit(argv[i]))
	{
		int num = str_to_int(argv[i];

		if (num > 0)
		sum += num;
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of command line arguments as strings.
 *
 * Return: 0 if successful, 1 if an error occurred.
 */
int main(int argc, char *argv[])
{
	return (add_positive_numbers(argc, argv));
}
