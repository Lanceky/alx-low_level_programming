#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_number - Checks if a string is a number.
 * @str: The string to check.
 * 
 * Return: 1 if string is a number, 0 otherwise.
 */
int is_number(char *str)
{
int i;

i = 0;
if (str[0] == '\0')
return (0);

while (str[i])
{
if (!isdigit(str[i]))
return (0);
i++;
}
return (1);
}

/**
 * main - Adds positive numbers and prints the result.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * 
 * Return: 0 if successful, 1 if error.
 */
int main(int argc, char *argv[])
{
int i, sum;

sum = 0;
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}

