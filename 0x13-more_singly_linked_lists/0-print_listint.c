#include "lists.h"
/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 *
 * Return: Number of nodes in the list.
 **/
size_t print_listint(const listint_t *h)
{
    unsigned int count = 0;

    while (h)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }
    return (count);
}
