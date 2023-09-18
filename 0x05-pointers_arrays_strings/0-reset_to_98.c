#include "main.h"

/**
 * reset_to_98 - Updates the value pointed to by n to 98.
 * @n: A pointer to an integer.
 */
void reset_to_98(int *n)
{
	/* Check if n is not NULL before dereferencing */
	if (n != 0)
	{
		*n = 98;
	}
}
