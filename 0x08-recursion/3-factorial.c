#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Return -1 to indicate error for negative input */

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
		return (1);

	/* Recursively calculate factorial */
	return (n * factorial(n - 1));
}

