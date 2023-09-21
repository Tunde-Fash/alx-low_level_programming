#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @s: The input string to be encoded
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *input = s;
	char *output = s;

	while (*input)
	{
		char c = *input;

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			*output = ((c - base + 13) % 26) + base;
		}
		else
		{
			*output = c;
		}

		input++;
		output++;
	}

	*output = '\0'; /* Null-terminate the encoded string */

	return (s);
}
