#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *current = str;

	while (*current)
	{
		if (*current >= 'a' && *current <= 'z')
		{
			*current = *current - ('a' - 'A');
		}
		current++;
	}

	return (str);
}
