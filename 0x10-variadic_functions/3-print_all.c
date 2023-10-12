#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on a format string
 * @format: A string containing the format specifiers
 * @...: The variadic arguments to be printed
 *
 * Description: The function prints characters, integers, floats, and strings
 * according to the format string. If the string is NULL, it prints "(nil)".
 * Any other characters in the format string are ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
	case 'c':
	printf("%s%c", sep, va_arg(args, int));
	break;

	case 'i':
	printf("%s%d", sep, va_arg(args, int));
	break;

	case 'f':
	printf("%s%f", sep, va_arg(args, double));
	break;

	case 's':
	{
	char *str = va_arg(args, char *);

	if (!str)
	str = "(nil)";
	printf("%s%s", sep, str);
	}
	break;
	default:
	i++;
	continue;
	}
	sep = ", ";
	i++;
	}
	va_end(args);
	printf("\n");
}
