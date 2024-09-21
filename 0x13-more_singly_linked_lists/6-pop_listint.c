#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (*head == NULL)
return (0);

temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);

return (n);
}
