#include "function_pointers.h"

/**
 * print_name - prints a name using the function pointed by f
 * @name: name of the person
 * @f: pointer to the function used to print the name
 */
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}
