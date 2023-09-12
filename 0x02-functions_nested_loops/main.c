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
 * print_alphabet_x10 - Prints the lowercase alphabet ten times followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the lowercase alphabet ten times, each followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
