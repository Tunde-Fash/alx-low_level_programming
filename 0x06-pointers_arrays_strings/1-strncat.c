#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: The maximum number of bytes from src to concatenate.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	/* Find the end of the destination string */
	while (*dest)
		dest++;

	/* Copy at most n bytes from src to dest */
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Null-terminate the resulting string */
	*dest = '\0';

	return (dest_start);
}
