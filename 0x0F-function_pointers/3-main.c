#include "3-calc.h"

/**
 * main - Entry point for the calculator program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 for success, 98 for argument error, 99 for invalid operator, 100 for division by zero
 */
int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Error\n");
        exit(98);
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char *operator = argv[2];

    int (*func)(int, int) = get_op_func(operator);

    if (func == NULL) {
        printf("Error\n");
        exit(99);
    }

    int result = func(num1, num2);
    printf("%d\n", result);

    return (0);
}

