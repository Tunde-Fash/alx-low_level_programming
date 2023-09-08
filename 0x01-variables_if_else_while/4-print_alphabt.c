#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Ths program prints d lowercase alphabet, excluding 'q' and 'e',
 * followed by a new line using the putchar function.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'q')
	{
		putchar(letter);
	}
	letter++;
	}

	putchar('\n');

	return (0);
}
