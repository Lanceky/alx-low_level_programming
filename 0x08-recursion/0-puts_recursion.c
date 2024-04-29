#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') // Base case: end of string
    {
        _putchar('\n'); // Print newline character
        return;
    }

    _putchar(*s); // Print current character
    _puts_recursion(s + 1); // Recursive call to print rest of the string
}

