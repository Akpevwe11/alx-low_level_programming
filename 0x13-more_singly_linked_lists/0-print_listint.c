#include "lists.h"

/**
 * print_listint - prints a list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_count = 0;

	if (!h)
		return (0);

	while (current)
	{
		printf("%d\n", current->n);
		node_count++;
		current = current->next;
	}

	return (node_count);
}
