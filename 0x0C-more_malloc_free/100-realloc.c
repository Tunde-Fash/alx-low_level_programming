#include "main.h"

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory block (or NULL).
 * @old_size: Size of the old memory block in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: Pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    /* Handle special cases */

    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }

    if (ptr == NULL)
    {
        return (malloc(new_size));
    }

    /* Allocate a new memory block */

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
    {
        return (NULL);
    }

    /* Copy data from the old block to the new block */

    if (new_size <= old_size)
    {
        for (unsigned int i = 0; i < new_size; i++)
        {
            *((char *)new_ptr + i) = *((char *)ptr + i);
        }
    }
    else
    {
        for (unsigned int i = 0; i < old_size; i++)
        {
            *((char *)new_ptr + i) = *((char *)ptr + i);
        }
    }

    /* Free the old memory block */

    free(ptr);

    return (new_ptr);
}

