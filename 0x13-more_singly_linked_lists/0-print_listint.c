#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int nodeCount = 0;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		nodeCount++;
		current = current->next;
	}
	return (nodeCount);
}
