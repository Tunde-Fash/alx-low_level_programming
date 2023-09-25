#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: 2D array representing the chessboard.
 *
 * Description: This function takes a 2D array (8x8) representing a chessboard
 * and prints it to the standard output.
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
