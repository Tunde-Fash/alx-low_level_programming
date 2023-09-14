#include "main.h"
/**
 * print_square - Prints a square of a given size using '#'.
 *
 * @size: The size of the square to be printed.
 *        If size is 0 or less, it prints only a new line.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
