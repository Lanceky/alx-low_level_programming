#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
    int i;

    printf("%d", a[0]);

    for (i = 1; i < n; i++)
    {
        printf(", %d", a[i]);
    }

    printf("\n");
}

