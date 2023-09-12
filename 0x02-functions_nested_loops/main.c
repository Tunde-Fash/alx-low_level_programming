#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_putchar - Prints "_putchar" followed by a new line
 */
void print_putchar(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * main - Entry point of the program
 *
 * Description: This program prints "_putchar" followed by a new line
 * and returns 0.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_putchar();
	return (0);
}

