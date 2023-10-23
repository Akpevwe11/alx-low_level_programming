#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		currentNode = (*head)->next;
		free(*head);
		*head = currentNode;
	}
}
