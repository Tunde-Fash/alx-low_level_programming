#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int sign = 1; /* 1 for positive, -1 for negative */
	int result = 0;
	int i = 0;

	/* Handle leading whitespace */
	while (s[i] == ' ' || s[i] == '\t')
		i++;

	/* Handle optional sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Convert the remaining characters to an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
	if (result > INT_MAX / 10 ||
		(result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
