#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 * Numbers must be separated by ", " followed by a space.
 * The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1, and 2.
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 * You can only use the putchar function (every other function is forbidden).
 * You can only use putchar six times maximum in your code.
 * You are not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

for (i = 0; i < 8; ++i)
{
for (j = i + 1; j < 9; ++j)
{
for (k = j + 1; k < 10; ++k)
{
/* Print the smallest combination of three digits */
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');

/* Check if it's the last combination to avoid printing the comma */
if (i < 7 || j < 8 || k < 9)
{
/* Print the separator */
putchar(',');
putchar(' ');
}
}
}
}

/* Print a newline at the end */
putchar('\n');

return (0);
}

