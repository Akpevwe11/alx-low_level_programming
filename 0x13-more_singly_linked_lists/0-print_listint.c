#include "lists.h"
/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 *
 * Return: Number of nodes in the list.
 **/
size_t print_listint(const listint_t *h)
{
    const listint_t *tp;
    unsigned int cntr = 0;

    tp = h;
    while (tp)
    {
        printf("%d\n", tp->n);
        cntr++;
        tp = tp->next;
    }
    return (cntr);
}
