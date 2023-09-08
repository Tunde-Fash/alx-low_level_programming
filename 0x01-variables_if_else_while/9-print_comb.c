#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prts all possible combinations of single-digit no,
 * separated by ", ", in ascending order, using a maximum of four putchar calls.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');

		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
