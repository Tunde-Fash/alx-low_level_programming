#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 * Return: 1 if it's a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words in a string.
 * @s: The input string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i;

	if (s == NULL || s[0] == '\0')
		return (s);

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || is_separator(s[i - 1]))
				s[i] -= 32; /* Convert to uppercase */
		}
	}

	return (s);
}
