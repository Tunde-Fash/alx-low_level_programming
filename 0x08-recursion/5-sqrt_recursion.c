#include "main.h"

/**
 * helper - recursive helper function to find the square root
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the natural square root if it exists, -1 otherwise
 */
int helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
