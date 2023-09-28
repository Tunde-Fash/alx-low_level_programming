#include "main.h"

/**
 * _pow_recursion - Calculates x raised to the power of y recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	/* Handle the special case when y is negative */
	if (y < 0)
		return (-1);

	/* Base case: when y is 0, x^0 is always 1 */
	if (y == 0)
		return (1);

	/* Recursive case: x^y = x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
