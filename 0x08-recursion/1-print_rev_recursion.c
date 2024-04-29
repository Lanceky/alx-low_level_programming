#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively
 * @s: The string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	/* Move to the next character recursively */
	_print_rev_recursion(s + 1);

	/* Print the current character */
	_putchar(*s);
}
}
