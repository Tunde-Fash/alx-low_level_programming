#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size in bytes of the allocated space for ptr.
 * @new_size: New size in bytes of the new memory block.
 *
 * Return: Pointer to the newly allocated memory block.
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

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return NULL;

    /* Copy the minimum of old_size and new_size bytes */
    if (old_size < new_size)
        new_size = old_size;

    char *source = ptr;
    char *dest = new_ptr;

    while (new_size--)
        *dest++ = *source++;

    free(ptr); /* Free the old memory block */
    return new_ptr;
}

