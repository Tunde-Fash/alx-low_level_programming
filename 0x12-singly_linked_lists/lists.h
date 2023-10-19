#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed string)
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */

