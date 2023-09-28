#include "main.h"


/**
 * factorial - Computes the factorial of a number using recursion
 * @n: The number to compute the factorial for
 *
 * Return: The factorial of n, or -1 if n is less than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
