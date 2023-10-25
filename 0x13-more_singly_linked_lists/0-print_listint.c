#include "lists.h"

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 *
 * Return: Number of nodes on the list.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int nodeCount = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		nodeCount++;
		temp = temp->next;
	}
	return (nodeCount);
}
