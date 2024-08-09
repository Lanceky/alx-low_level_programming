#include "lists.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head = NULL;
    listint_t *temp;
    int i;

    for (i = 0; i < 150; i++)
    {
        if (add_nodeint_end(&head, i) == NULL)
        {
            printf("Failed to add node %d\n", i);
            return (1);
        }
    }

    /* Print the list to verify */
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }

    /* Free the list */
    free_listint(head);

    return (0);
}

