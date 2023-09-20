/* _strncpy.c */
#include "main.h"

/**
 * _strncpy - copies at most n characters from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: a pointer to the destination string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characts from src to dest up to n or until null terminator is rechd */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Fill remaining space in dest with null bytes if necessary */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
