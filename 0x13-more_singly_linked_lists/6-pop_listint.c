#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head node.
 * Return: The data of the head node or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
	return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);

	return (data);
}
