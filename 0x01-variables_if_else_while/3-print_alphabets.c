#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints d uppercase alphabet followed by a new line
 * using the putchar function.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char letter = 'A';

	while (letter <= 'Z')
	{
	putchar(letter);
	letter++;
	}

	putchar('\n');

	return (0);
}
