#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (_is_lowercase(str[i]))
		{
			str[i] = str[i] - 32; /* Convert to uppercase */
		}
		i++;
	}

	return (str);
}
