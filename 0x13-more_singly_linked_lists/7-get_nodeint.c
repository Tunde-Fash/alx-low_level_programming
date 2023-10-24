#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve (starting at 0)
 * Return: Pointer to the nth node or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *current = head;

    while (current != NULL)
    {
        if (i == index)
            return current;
        i++;
        current = current->next;
    }

    return NULL;
}

