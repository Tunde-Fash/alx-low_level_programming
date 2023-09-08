#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints d lowercase alphabet followed by a new line
 * using the putchar function.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}

	putchar('\n');

	return (0);
}