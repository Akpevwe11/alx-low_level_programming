#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a list.
 * @head: Pointer to the address of the first node of the list.
 * @n: Integer to insert into the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
