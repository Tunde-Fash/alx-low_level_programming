#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: A function pointer to a function that prints a string
 *
 * Description: This function takes a name and a function pointer as arguments.
 * It then uses the function pointer to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}

