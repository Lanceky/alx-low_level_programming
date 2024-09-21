#include "lists.h"
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *to_delete;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
to_delete = *head;
*head = (*head)->next;
free(to_delete);
return (1);
}

temp = *head;
for (i = 0; i < index - 1 && temp != NULL; i++)
temp = temp->next;

if (temp == NULL || temp->next == NULL)
return (-1);

to_delete = temp->next;
temp->next = to_delete->next;
free(to_delete);

return (1);
}
