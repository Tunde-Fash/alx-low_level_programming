#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints d lowercase alphabet, followed by
 * the uppercase alphabet, and then a new line using the putchar function.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
	putchar(lowercase);
	lowercase++;
	}

	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}

	putchar('\n');

	return (0);
}
