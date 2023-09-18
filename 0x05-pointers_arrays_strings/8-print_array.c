#include "main.h"

/**
 * print_array - Prints n elements of an integer array.
 * @a: Pointer to the integer array.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	if (a == 0)  /* Check for NULL pointer (0) */
		return;

	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]); /* Print the current element */

		if (i < n - 1)
			printf(", "); /* Print comma and space unless it's the last element */
	}

	printf("\n"); /* Print a newline character at the end */
}
