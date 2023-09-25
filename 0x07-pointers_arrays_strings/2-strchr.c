#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	/* Loop through the string s */
	while (*s)
	{
		/* If the current character matches c, return a pointer to it */
		if (*s == c)
			return (s);
		s++;
	}

	/* If c is not found, return NULL */
	return (0);
}
