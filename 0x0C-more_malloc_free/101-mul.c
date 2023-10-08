#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    char *num1, *num2, *result;

    if (argc != 3)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    num1 = argv[1];
    num2 = argv[2];

    if (!_isdigit(num1) || !_isdigit(num2))
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    result = malloc(_strlen(num1) + _strlen(num2) + 1);
    if (result == NULL)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    _multiply(num1, num2);
    print_result(result);

    free(result);

    return (0);
}

