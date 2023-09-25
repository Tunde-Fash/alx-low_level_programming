#include "main.h"

int main(void)
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = 3;

    printf("Sum of diagonals: ");
    print_diagsums((int *)matrix, size);

    return (0);
}

