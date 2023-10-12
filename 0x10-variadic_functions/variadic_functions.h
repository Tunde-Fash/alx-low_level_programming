#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct format_t - Struct format_t
 *
 * @format: The format specifier
 * @f: The function associated with the format specifier
 */
typedef struct format_t
{
	char *format;
	void (*f)(va_list);
} format_t;

int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */

