#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h)
    {
        _putchar(h->n + '0');  /* Assuming _putchar can handle integers directly */
        _putchar('\n');
        h = h->next;
        count++;
    }

    return (count);
}

