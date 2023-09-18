#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to reverse.
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	/* Calculate the length of the string */
	while (s[len] != 0)
		len++;

	for (i = 0; i < len / 2; i++)
	{
		/* Swap characters from the start and end of the string */
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
