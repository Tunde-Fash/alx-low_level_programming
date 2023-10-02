#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	while (*haystack != '\0')
    {
	haystack_ptr = haystack;
	needle_ptr = needle;

	while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
	{
		haystack_ptr++;
		needle_ptr++;
	}

	if (*needle_ptr == '\0')
	{
		return (haystack);
	}

	haystack++;
	}

	return (0);
}
