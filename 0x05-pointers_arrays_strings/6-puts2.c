/*
 * puts2.c
 * Description: This file contains the implementation of the puts2 function,
 * which prints every other character of a given string, starting with the
 * first character, followed by a new line.
 */

#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;  /* Move to every other character */
	}
		_putchar('\n');
}
