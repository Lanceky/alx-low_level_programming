#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit - Checks if a string contains only digits.
 * @str: The string to check.
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return (0);
        str++;
    }
    return (1);
}

/**
 * _strlen - Computes the length of a string.
 * @str: The string.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
    int length = 0;

    while (str[length])
        length++;
    return (length);
}

/**
 * multiply - Multiplies two large numbers given as strings.
 * @num1: The first number.
 * @num2: The second number.
 * Return: The result of multiplication as a string.
 */
char *multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int *result = calloc(len1 + len2, sizeof(int));
    char *res_str;
    int i, j, carry, pos1, pos2;

    if (!result)
        exit(98);

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        pos1 = len1 - 1 - i;
        for (j = len2 - 1; j >= 0; j--)
        {
            pos2 = len2 - 1 - j;
            carry += (num1[i] - '0') * (num2[j] - '0') + result[pos1 + pos2];
            result[pos1 + pos2] = carry % 10;
            carry /= 10;
        }
        if (carry > 0)
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
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    char *result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    result = multiply(argv[1], argv[2]);
    if (!result)
    {
        printf("Error\n");
        return (98);
    }

    printf("%s\n", result);
    free(result);
    return (0);
}

