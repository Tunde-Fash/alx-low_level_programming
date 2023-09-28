#include "main.h"

/**
 * is_prime_recursive - Helper function to check if a nue recursively
 * @n: The number to check for primality
 * @divisor: The divisor being tested
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The integer to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, n - 1));
}

