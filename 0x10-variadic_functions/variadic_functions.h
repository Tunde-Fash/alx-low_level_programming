#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

typedef struct print_format
{
	char *format;
	void (*func)(va_list);
}
	print_format_t;


void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */

