#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            _putchar('[');
            _putchar('0');
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
        }
        else
        {
            char len_str[11];
            int len = h->len;
            int i = 0;
            if (len == 0)
                len_str[i++] = '0';
            while (len > 0)
            {
                len_str[i++] = (len % 10) + '0';
                len /= 10;
            }
            len_str[i] = '\0';
            for (int j = i - 1; j >= 0; j--)
                _putchar(len_str[j]);
            _putchar(' ');
            char *str = h->str;
            while (*str)
                _putchar(*str++);
        }
        _putchar('\n');
        count++;
        h = h->next;
    }
    return (count);
}

