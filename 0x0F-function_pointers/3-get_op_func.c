#include "3-calc.h"

/**
 * get_op_func - Function that selects the correct function to perform
 * the operation asked by the user.
 * @s: The operator passed as an argument to the program
 * Return: A pointer to the corresponding function or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", add},
	{"-", sub},
	{"*", mul},
	{"/", div},
	{"%", mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
	if (strcmp(ops[i].op, s) == 0)
	return (ops[i].f);
	i++;
	}

	return (NULL);
}
