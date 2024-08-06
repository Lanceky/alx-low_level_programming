#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}

/**
 * is_digit - Checks if a string is a number
 * @str: The string to check
 *
 * Return: 1 if the string is a number, 0 otherwise
 */
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return 0;
str++;
}
return 1;
}

/**
 * main - Multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
char *num1, *num2;
int i;

if (argc != 3)
{
write(2, "Error\n", 6);
exit(98);
}

num1 = argv[1];
num2 = argv[2];

if (!is_digit(num1) || !is_digit(num2))
{
write(2, "Error\n", 6);
exit(98);
}

// Convert num1 and num2 to integers (assuming they fit in int)
int n1 = atoi(num1);
int n2 = atoi(num2);
int result = n1 * n2;

// Print the result
i = 0;
while (result)
{
_putchar((result % 10) + '0');
result /= 10;
i++;
}
if (i == 0)
_putchar('0');
_putchar('\n');

return 0;
}

