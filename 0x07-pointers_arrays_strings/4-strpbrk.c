#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search in.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr_s = s;
	char *ptr_accept;

	while (*ptr_s)
	{
		ptr_accept = accept;
		while (*ptr_accept)
		{
			if (*ptr_s == *ptr_accept)
				return (ptr_s);
			ptr_accept++;
		}
		ptr_s++;
	}

	return (0);
}
