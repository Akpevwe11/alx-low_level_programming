#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Pointer to the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *currentNode, *nextNode;

	currentNode = head;
	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}
}
