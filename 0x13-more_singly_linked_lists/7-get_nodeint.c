#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Get a node at a specific index in a linked list
 * @head: A pointer to the first node of the linked list.
 * @index: The index of the node to retrieve (starting from 0).
 * Return: A pointer to the node at the specified index , or NULL if not found.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int currentPosition = 0;

	if (head == NULL)
		return (NULL);
	while (currentPosition < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		currentPosition++;
	}
	return (head);
}
