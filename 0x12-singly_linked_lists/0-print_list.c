#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);

	count++;
	h = h->next;
	}

	return (count);
}

/**
 * main - Entry point of the program, demonstrates the usage of print_list.
 *
 * This function creates a sample linked list and uses the print_list function
 * to print its elements and count the number of nodes in the list.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
    list_t *head = NULL;

    /* Create a sample linked list */
    list_t node1, node2, node3;
    node1.str = "Hello";
    node1.len = 5;
    node1.next = &node2;

    node2.str = "World";
    node2.len = 5;
    node2.next = &node3;

    node3.str = "!";
    node3.len = 1;
    node3.next = NULL;

    head = &node1;

    size_t count = print_list(head);
    printf("Number of nodes: %zu\n");

    return (0);
}

