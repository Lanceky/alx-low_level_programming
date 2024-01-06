#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp, start, end;

	for (start = 0, end = n - 1; start < end; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}

