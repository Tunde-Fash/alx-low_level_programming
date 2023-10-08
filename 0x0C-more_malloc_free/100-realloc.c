#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size (in bytes) of the old memory block.
 * @new_size: New size (in bytes) for the memory block.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    if (new_size == old_size)
        return ptr;

    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
            return NULL;
        return new_ptr;
    }

    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    if (new_size > old_size)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
            return NULL;
        for (unsigned int i = 0; i < old_size; i++)
            *((char *)new_ptr + i) = *((char *)ptr + i);
        free(ptr);
        return new_ptr;
    }

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return NULL;
    for (unsigned int i = 0; i < new_size; i++)
        *((char *)new_ptr + i) = *((char *)ptr + i);
    free(ptr);
    return new_ptr;
}

