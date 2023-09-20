#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 * Description: This function takes an array of integers and its length 'n'
 *              as parameters and reverses the order of its elements in-place.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		/* Swap elements a[i] and a[n-i-1] */
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
