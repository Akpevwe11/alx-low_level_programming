#include "lists.h"

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to the first node in the list.
 *
 * Return: The number of nodes.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *temp_var = h;
	unsigned int nodeCount = 0;

	while (temp_var)
	{
		printf("%d\n", temp_var->n);
		nodeCount++;
		temp_var = temp_var->next;
	}
	return (nodeCount);
}
