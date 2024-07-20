#include <stddef.h>  // For size_t
#include <stdlib.h>  // For malloc, free

/**
 * linear_search - Searches for a value in an array of integers using Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for in the array.
 * @log: Pointer to a string buffer where search log will be stored.
 *
 * Return: The first index where value is located, or -1 if not found or array is NULL.
 */
int linear_search(int *array, size_t size, int value, char **log)
{
    if (array == NULL)
        return -1;

    *log = malloc(size * 30);  // Allocate memory for log (approx. 30 chars per element)
    if (*log == NULL)
        return -1;

    **log = '\0';  // Initialize log as empty string

    for (size_t i = 0; i < size; i++)
    {
        if (i > 0)
            strcat(*log, " ");  // Add space separator between entries
        
        char temp[30];
        sprintf(temp, "Value checked array[%lu] = [%d]", i, array[i]);
        strcat(*log, temp);  // Append current comparison to log

        if (array[i] == value)
            return i;  // Return index if value found
    }

    return -1;  // Value not found
}

