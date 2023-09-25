#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: The pointer to the square matrix.
 * @size: The size of the matrix (number of rows or columns).
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0; /* Sum of the primary diagonal (top-left to bottom-right) */
	int sum2 = 0; /* Sum of the secondary diagonal (top-right to bottom-left) */

	for (int i = 0; i < size; i++)
	{
		sum1 += a[i * size + i]; /*Sum of the primary diagonal */
		sum2 += a[i * size + (size - 1 - i)]; /* Sum of the secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
