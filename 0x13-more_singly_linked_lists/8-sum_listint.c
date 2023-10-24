#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Calculate the sum of all the n values in a linked list.
 * @head: A pointer to the first node of the list.
 * Return: The total sum of n values in the list.
 **/

int sum_listint(listint_t *head)
{
	int totalSum = 0;

	while (head != NULL)
	{
		totalSum += head->n;
		head = head->next;
	}
	return (totalSum);
}
