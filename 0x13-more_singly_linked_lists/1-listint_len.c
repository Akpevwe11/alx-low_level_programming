#include "lists.h"

/**
 * listint_len - Calculate the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in the list.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	unsigned int elementCount = 0;

	current = h;
	while (current)
	{
		elementCount++;
	        current = current->next;
	}
	return (elementCount);
}
