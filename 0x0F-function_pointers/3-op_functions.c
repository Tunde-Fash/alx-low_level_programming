#include "3-calc.h"

/**
 * op_add - Function that returns the sum of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that returns the difference of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: The difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that returns the product of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that returns the result of the division of a by b.
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the division of a by b
 */
int div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function that returns the remainder of the division of a by b.
 * @a: The first integer
 * @b: The second integer
 * Return: The remainder of the division of a by b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
