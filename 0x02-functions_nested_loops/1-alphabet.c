#include "main.h"

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the lowercase alphabet followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

