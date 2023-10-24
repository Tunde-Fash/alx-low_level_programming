#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a lit
 * @head: A pointer to the head of the linked list
 * @idx: The index at which the new node should be inserted (starting from 0)
 * @n: The value to store in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int i = 0;

	if (!head)
	return (NULL);

	/* Create a new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);
	new_node->n = n;

	/* Insert at the beginning if index is 0 */
	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	/* Traverse the list to find the previous node to the given index */
	while (current && i < idx - 1)
	{
	current = current->next;
	i++;
	}

	/* Check if the index is out of bounds */
	if (!current)
	{
	free(new_node);
	return (NULL);
	}

	/* Insert the new node after the previous node */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
