#include "main.h"

/**
 * leet - Encode a string into "1337" (leet speak).
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i;
	char leet_map[256] = {0};  /* Initialize a mapping array to all zeros. */

	/* Initialize the mapping for lowercase letters. */
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'a' || i == 'e' || i == 'o' || i == 't' || i == 'l')
			leet_map[i] = '4';
		else
			leet_map[i] = i;
	}

    /* Initialize the mapping for uppercase letters. */
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == 'A' || i == 'E' || i == 'O' || i == 'T' || i == 'L')
			leet_map[i] = '4';
		else
			leet_map[i] = i;
	}

	/* Loop through the input string and apply the mapping. */
	for (i = 0; str[i] != '\0'; i++)
	{
	str[i] = leet_map[str[i]];
	}

	return (str);
}
