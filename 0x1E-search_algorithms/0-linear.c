#include <stddef.h>  // For size_t
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The first index where value is located, or -1 if not found or array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        
        if (array[i] == value)
            return i;  // Return the index where the value is found
    }

    return -1;  // Return -1 if the value is not found
}

