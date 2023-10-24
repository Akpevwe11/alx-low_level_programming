#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	temp = *head;
	for (; i < idx - 1 && temp != NULL; i++)
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
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
