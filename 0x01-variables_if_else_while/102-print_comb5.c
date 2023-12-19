#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 * All numbers should be printed with two digits.
 * The combination of numbers must be separated by a comma, followed by a space.
 * Combinations of numbers should be printed in ascending order.
 * 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1.
 * You can only use the putchar function (every other function is forbidden).
 * You can only use putchar eight times maximum in your code.
 * You are not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 99; ++num1)
	{
		for (num2 = num1 + 1; num2 < 100; ++num2)
		{
			/* Print the first two-digit number */
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');

			/* Print the separator */
			putchar(' ');

			/* Print the second two-digit number */
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			/* Check if it's the last combination to avoid printing the comma */
			if (num1 < 98 || num2 < 99)
			{
				/* Print the comma and space */
				putchar(',');
				putchar(' ');
			}
		}
	}

	/* Print a newline at the end */
	putchar('\n');

	return 0;
}

