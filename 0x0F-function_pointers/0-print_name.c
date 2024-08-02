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

