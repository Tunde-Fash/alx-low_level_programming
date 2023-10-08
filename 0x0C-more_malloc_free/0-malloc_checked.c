#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of memory to allocate
 *
 * Return: Pointer to the allocated memory
 *         Exit with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        /* If malloc fails, exit with status 98 */
        exit(98);
    }

    return (ptr);
}

