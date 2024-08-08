#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the head of the list.
 * 
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        if (h->str)
            _putchar('['), _putchar('0' + (h->len / 10)), _putchar('0' + (h->len % 10)), _putchar(']'), _putchar(' '), _putchar(h->str[0]);
        else
            _putchar('['), _putchar('0'), _putchar(']'), _putchar(' '), _putchar('('), _putchar('n'), _putchar('i'), _putchar('l'), _putchar(')');
        
        _putchar('\n');
        count++;
        h = h->next;
    }
    return (count);
}

