#include <stddef.h>  // For size_t
#include <stdio.h>   // For printf

#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index where value is located, or -1 if not found or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t left = 0;
    size_t right = size - 1;

    while (left <= right)
    {
        // Print the current subarray being searched
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        size_t mid = left + (right - left) / 2;

        // Check if value is present at mid
        if (array[mid] == value)
            return mid;
        // If value is greater, ignore left half
        else if (array[mid] < value)
            left = mid + 1;
        // If value is smaller, ignore right half
        else
            right = mid - 1;
    }

    // Value not found
    return -1;
}

