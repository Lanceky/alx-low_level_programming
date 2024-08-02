#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Performs simple operations based on command-line arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 * 
 * Return: Always 0 on success, or exits with status 98, 99, or 100 on errors.
 */
int main(int argc, char *argv[])
{
int a, b;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);

if (op_func == NULL)
{
printf("Error\n");
exit(99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", op_func(a, b));
return (0);
}

