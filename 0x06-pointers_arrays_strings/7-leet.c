#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_map[256] = {0}; /* Initialize the leet_map with zeros */

	/* Initialize the leet_map with the required mappings */
	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	/* Loop through the input string and replace characters as needed */
	while (*ptr)
	{
		if (leet_map[(unsigned char)*ptr])
		{
			*ptr = leet_map[(unsigned char)*ptr];
		}
		ptr++;
	}

	return (str);
}
