#include "3-calc.h"
#include <stdlib.h>

/**
* main - Performs simple operations based on user input.
* @argc: The number of arguments.
* @argv: The arguments array.
*
* Return: 0 if successful, otherwise an error code.
*/
int main(int argc, char *argv[])
{
int a, b, result;
int (*op_func)(int, int);

if (argc != 4)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);

if (!op_func)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(99);
}

if ((*argv[2] == '/' && b == 0) || (*argv[2] == '%' && b == 0))
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(100);
}

result = op_func(a, b);
_putchar(result + '0'); /* Simplified result output */
_putchar('\n');

return (0);
}

