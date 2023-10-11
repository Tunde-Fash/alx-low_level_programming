#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: A function pointer to a function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}

/**
 * print_name_with_putchar - A function to print a name using _putchar
 * @name: The name to be printed
 */
void print_name_with_putchar(char *name)
{
    while (*name)
    {
        _putchar(*name);
        name++;
    }
    _putchar('\n');
}

/**
 * _putchar - A custom putchar function
 * @c: The character to be printed
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

