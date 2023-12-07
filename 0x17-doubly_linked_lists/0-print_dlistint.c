#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlist_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count;

	node_count = 0;
	if (h == NULL)
		return (node_count);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
