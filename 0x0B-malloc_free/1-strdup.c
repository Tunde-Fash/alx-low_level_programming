#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The input string.
 *
 * Return: A pointer to a newly allocated string which is a duplicate of str.
 * NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len = 0;

	if (str == NULL)
	return (NULL);

	/* Calculate the length of the input string */
	while (str[len])
	len++;

	/* Allocate memory for the duplicate string (+1 for the null terminator) */
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	return (NULL);

	/* Copy the characters from str to duplicate */
	for (i = 0; i <= len; i++)
	duplicate[i] = str[i];

	return (duplicate);
}
