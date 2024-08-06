#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialized with a specific char.
 * @size: the size of the array to create
 * @c: the char to initialize each element of the array
 *
 * Return: pointer to the array, or NULL if size is 0 or memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0)
    {
        return (NULL);
    }

    array = (char *)malloc(size * sizeof(char));
    if (array == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < size; i++)
    {
        array[i] = c;
    }

    return (array);
}

