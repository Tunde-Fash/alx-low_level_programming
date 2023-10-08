#include "main.h"

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory, NULL on failure or if nmemb/size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;
    unsigned int total_size;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total_size = nmemb * size;
    ptr = malloc(total_size);

    if (ptr == NULL)
        return (NULL);

    /* Initialize allocated memory to zero */
    for (i = 0; i < total_size; i++)
        *((char *)ptr + i) = 0;

    return (ptr);
}
