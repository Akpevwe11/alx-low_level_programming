#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Pointer to the Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Pointer to the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currentNode;

	temp = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	currentNode = *head;
	while (currentNode->next)
		currentNode = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
