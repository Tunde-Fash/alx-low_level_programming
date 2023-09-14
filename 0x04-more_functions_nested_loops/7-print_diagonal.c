// print_diagonal.c
#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: If n is 0 or less, the function should only print a '\n'.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n'); // Print a newline character and return for n <= 0.
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' '); // Print spaces before the '\' character.
		}
		_putchar('\\'); // Print the '\' character.
		_putchar('\n'); // Print a newline character.
	}
}
