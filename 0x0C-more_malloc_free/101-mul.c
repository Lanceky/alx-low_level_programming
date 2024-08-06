#include "main.h"

/**
 * is_digit - checks if a string is composed of digits only
 * @str: the string to check
 * Return: 1 if true, 0 if false
 */
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string to measure
 * Return: the length of the string
 */
int _strlen(char *str)
{
int len = 0;

while (str[len])
len++;
return (len);
}

/**
 * multiply - multiplies two large numbers represented as strings
 * @num1: first number
 * @num2: second number
 * Return: the result of the multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
int len1 = _strlen(num1);
int len2 = _strlen(num2);
int *result = calloc(len1 + len2, sizeof(int));
char *res_str;
int i, j, carry, sum, pos1, pos2;

if (!result)
exit(98);

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
pos1 = len1 - 1 - i;
for (j = len2 - 1; j >= 0; j--)
{
pos2 = len2 - 1 - j;
sum = (num1[i] - '0') * (num2[j] - '0') + result[pos1 + pos2] + carry;
carry = sum / 10;
result[pos1 + pos2] = sum % 10;
}
if (carry)
result[pos1 + pos2 + 1] += carry;
}

for (i = len1 + len2 - 1; i >= 0; i--)
if (result[i] != 0)
break;

res_str = malloc(i + 2);
if (!res_str)
exit(98);

for (j = 0; j <= i; j++)
res_str[j] = result[i - j] + '0';
res_str[j] = '\0';

free(result);
return (res_str);
}

/**
 * main - multiplies two positive numbers and prints the result
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
char *result;

if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (98);
}

if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (98);
}

result = multiply(argv[1], argv[2]);
if (!result)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (98);
}

for (int i = 0; result[i]; i++)
_putchar(result[i]);
_putchar('\n');

free(result);
return (0);
}

