#include "lists.h"
#include <stddef.h>

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            _putchar('[0] (nil)\n');
        else
            _putchar('[' + h->len + '] ' + h->str + '\n');
        h = h->next;
        count++;
    }
    return count;
}

