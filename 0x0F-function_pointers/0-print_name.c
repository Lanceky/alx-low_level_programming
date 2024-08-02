#include "function_pointers.h"

/**
* print_name - Prints a name using the provided function.
* @name: The name to be printed.
* @f: Pointer to the function used to print the name.
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}

/**
* print_name_as_is - Prints the name as is.
* @name: The name of the person.
*
* Return: Nothing.
*/
void print_name_as_is(char *name)
{
unsigned int i;

_putchar('H');
_putchar('e');
_putchar('l');
_putchar('l');
_putchar('o');
_putchar(',');
_putchar(' ');
_putchar('m');
_putchar('y');
_putchar(' ');
_putchar('n');
_putchar('a');
_putchar('m');
_putchar('e');
_putchar(' ');
_putchar('i');
_putchar('s');
_putchar(' ');

i = 0;
while (name[i])
{
_putchar(name[i]);
i++;
}
}

/**
* print_name_uppercase - Prints the name in uppercase.
* @name: The name of the person.
*
* Return: Nothing.
*/
void print_name_uppercase(char *name)
{
unsigned int i;

_putchar('H');
_putchar('e');
_putchar('l');
_putchar('l');
_putchar('o');
_putchar(',');
_putchar(' ');
_putchar('m');
_putchar('y');
_putchar(' ');
_putchar('u');
_putchar('p');
_putchar('p');
_putchar('e');
_putchar('r');
_putchar('c');
_putchar('a');
_putchar('s');
_putchar('e');
_putchar(' ');
_putchar('n');
_putchar('a');
_putchar('m');
_putchar('e');
_putchar(' ');
_putchar('i');
_putchar('s');
_putchar(' ');

i = 0;
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
_putchar(name[i] - ('a' - 'A'));
}
else
{
_putchar(name[i]);
}
i++;
}
}

