#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i, cap_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (cap_next)
			{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32; /* Convert to uppercase */
			cap_next = 0;
		}
		/* Check for word separators */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == ',' || str[i] == ';' || str[i] == '.'
			|| str[i] == '!' || str[i] == '?' || str[i] == '"'
			|| str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			cap_next = 1;
		}
	}

	return (str);
}
