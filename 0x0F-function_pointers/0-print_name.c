#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: The function pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *)) {
    if (name && f)
        f(name);
}

/**
 * print_name_orthodox - A function to print a name orthographically.
 * @name: The name to print.
 */
void print_name_orthodox(char *name) {
    if (name)
    {
        while (*name)
        {
            _putchar(*name);
            name++;
        }
        _putchar('\n');
    }
}

/**
 * print_name_reversed - A function to print a name reversed.
 * @name: The name to print.
 */
void print_name_reversed(char *name) {
    if (name)
    {
        int i = 0;
        while (name[i] != '\0')
            i++;
        for (i -= 1; i >= 0; i--)
            _putchar(name[i]);
        _putchar('\n');
    }
}

int main(void) {
    char *name = "John";

    print_name(name, print_name_orthodox);
    print_name(name, print_name_reversed);

    return (0);
}

