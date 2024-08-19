/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 *
 * Description: This function iterates through a doubly linked list,
 * printing each node's data and counting the nodes as it goes.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);  // Print the data of the current node
        count++;  // Increase the count for each node
        h = h->next;  // Move to the next node in the list
    }

    return (count);  // Return the total number of nodes
}

