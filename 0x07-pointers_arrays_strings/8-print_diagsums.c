#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The square matrix represented as a 1D array.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, diag1_sum = 0, diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += *(a + i * size + i); /* Diagonal from top-left to bottom-right */
		diag2_sum += *(a + i * size + (size - 1 - i)); /* Diagonal from top-right to bottom-left */
	}

	printf("%d, %d\n", diag1_sum, diag2_sum);
}

