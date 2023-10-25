#include "lists.h"

void free_listp(listptr_t **head);

/**
 * print_listint_safe - prints a list of integrs and checks for duplicates
 * @head: the head pointer of the linked list of integers
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	listptr_t *visited_nodes = NULL;
	listptr_t *current_node, *new_node, *previous_nodes;

	visited_nodes = NULL;
	while (head != NULL)
	{
		new_node = (listptr_t *)malloc(sizeof(listptr_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = visited_nodes;
		visited_nodes = new_node;

		previous_nodes = visited_nodes;

		while (previous_nodes->next != NULL)
		{
			previous_nodes = previous_nodes->next;
			if (head == previous_nodes->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&visited_nodes);
				return (node_count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;
	}

	free_listp(&visited_nodes);
	return (node_count);
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
	listptr_t *current_node;

	if (head != NULL)
	{
		current_node = *head;
		while ((temp = current_node) != NULL)
		{
			current_node = current_node->next;
			free(temp);
		}
		*head = NULL;
	}
}
