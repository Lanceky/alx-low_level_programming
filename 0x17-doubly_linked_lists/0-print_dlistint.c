#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all elemnts of a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the lis
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}
