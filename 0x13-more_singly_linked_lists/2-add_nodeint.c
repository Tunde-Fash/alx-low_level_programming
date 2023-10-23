#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @n: The integer value to add to the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);  // Memory allocation failed

    /* Set the value of the new node */
    new_node->n = n;

    /* Make the new node point to the current head */
    new_node->next = *head;

    /* Update the head to point to the new node */
    *head = new_node;

    return (new_node);
}

