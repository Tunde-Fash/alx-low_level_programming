#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: The input square matrix
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0; /* Initialize the sum for the first diagonal */
	int sum_diag2 = 0; /* Initialize the sum for the second diagonal */

	for (int i = 0; i < size; i++)
	{
		sum_diag1 += *(a + i * size + i);          /* Sum elements o*/
		sum_diag2 += *(a + i * size + (size - 1 - i)); /* Sum n */
	}

	/* Print the sums without using printf */
	char buffer[12]; /* Assuming the sum cand) */

	/* Convert and print sum_diag1 */
	int length_diag1 = snprintf(buffer, sizeof(buffer), "%d", sum_diag1);

	write(1, buffer, length_diag1);

	/* Print a space */
	write(1, " ", 1);

	/* Convert and print sum_diag2 */
	int length_diag2 = snprintf(buffer, sizeof(buffer), "%d", sum_diag2);

	write(1, buffer, length_diag2);

	/* Print a newline character */
	write(1, "\n", 1);
}
