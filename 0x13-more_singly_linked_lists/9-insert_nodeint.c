#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a specified positiion in the list.
 * @head: A pointer to the address of the first node in the list.
 * @idx: The position at which the new node should be inserted.
 * @n: Data of the new node.
 * Return: A pointer to the newly inserted node, or NULL on failure.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode;
	unsigned int currentPosition = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	currentNode = *head;
	for (; currentPosition < idx - 1 && currentNode != NULL; currentPosition++)
		currentNode = currentNode->next;
	if (currentNode == NULL)
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
