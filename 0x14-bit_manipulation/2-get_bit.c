#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index of the bit
 * Return: value of the bit at the specified index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index > (sizeof(unsigned long int) * 8 - 1))
        return -1;

    return (int)((n >> index) & 1);
}

