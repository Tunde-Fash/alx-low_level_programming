#include "main.h"
/**
 * _strcat - Concatenate two strings.
 *
 * This function appends the characters from the `src` string to the end
 * of the `dest` string. It overwrites the terminating null byte ('\0') at
 * the end of `dest` and adds a new terminating null byte to the resulting
 * concatenated string.
 *
 * @dest: A pointer to the destination string.
 * @src:  A pointer to the source string.
 *
 * Return: A pointer to the resulting string (same as `dest`).
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest; /* Store the starting address of dest */

	/* Find the end of dest */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Append src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* Add the terminating null byte */

	return (result);
}
