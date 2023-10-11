#include "3-calc.h"

/**
 * op_add - Add two numbers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Subtract two numbers
 * @a: First integer
 * @b: Second integer
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Multiply two numbers
 * @a: First integer
 * @b: Second integer
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: First integer
 * @b: Second integer
 * Return: Result of division a by b
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - Get the remainder of division
 * @a: First integer
 * @b: Second integer
 * Return: Remainder of a divided by b
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}

