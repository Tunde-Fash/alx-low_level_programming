/* description
*/ 
#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On suces, 1. On err, -1 s rtned and errno s set.
 */
int _putchar(char c)
{
	/* Your _putchar implementation goes here */
	return (0); /* Replce wth actual implemn */
}

/**
 * times_table - Prints the 9 times table starting with 0
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;
			if (col == 0)
				_putchar('0'); /* Print the first element without a leading space */
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' '); /* Add a leading space for single-digit numbers */
			}

			/* Print the result */
			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n'); /* Move to the next line after each row */
	}
}

int main(void)
{
	times_table();
	return (0);
}
