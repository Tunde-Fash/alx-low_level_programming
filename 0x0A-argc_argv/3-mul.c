#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of command line arguments as strings
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (check_arguments(argc) == 1)
	{
	printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}

/**
 * multiply - Multiplies two integers
 * @num1: The first integer
 * @num2: The second integer
 * Return: The result of the multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * check_arguments - Checks if the program received the correct number of argu
 * @argc: The number of command line arguments
 * Return: 0 if there are two arguments, 1 otherwise
 */
int check_arguments(int argc)
{
	if (argc != 3)
	return (1);
	return (0);
}
