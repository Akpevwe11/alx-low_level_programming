#include "lists.h"

void free_listp(listptr_t **head);

/**
 * print_listint_safe - a fucntion t hat can print a listint_t linked list.
 * @head: the header pointer for the linklist
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listptr_t *list_ptr_head, *new_node, *current_node;

	list_ptr_head = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listptr_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = hptr;
		list_ptr_head = new_node;

		current_node = list_ptr_head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
			if (head == current_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&list_ptr_head);
				return (num_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}

	free_listp(&list_ptr_head);
	return (num_nodes);
}

/**
 * free_listp - frees a linked list
 * @head: head of the list.
 *
 * Return: void
 */
void free_listp(listptr_t **head)
{
	listptr_t *temp;
	listptr_t *present;

	if (head != NULL)
	{
		present = *head;
		while ((temp = present) != NULL)
		{
			present = present->next;
			free(temp);
		}
		*head = NULL;
	}
}
