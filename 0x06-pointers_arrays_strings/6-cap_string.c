#include "main.h"

/**
 * cap_string - Capitalize all words in a string
 * @s: The input string
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i, cap_next = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cap_next && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
			cap_next = 0;
		}

		if (strchr(separators, s[i]) != NULL)
		{
			cap_next = 1;
		}
	}

	return (s);
}
