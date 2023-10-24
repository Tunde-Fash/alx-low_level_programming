#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specified index.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to delete. Index starts at 0.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    current = *head;
    for (i = 0; i < index - 1 && current != NULL; i++)
    {
        current = current->next;
    }

    if (current == NULL || current->next == NULL)
        return (-1);

    temp = current->next;
    current->next = current->next->next;
    free(temp);

    return (1);
}

