#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *firstNode;
	int removedData;

	if (*head == NULL)
		return (0);

	firstNode = *head;
	*head = firstNode->next;
	removedData = firstNode->n;
	free(firstNode);
	return (removedData);
}
