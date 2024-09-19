// _putchar.c
#include <unistd.h>
#include "main.h"
int _putchar(char c)
{
    return write(1, &c, 1);
}

// _islower.c
int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

// _isalpha.c
int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// _abs.c
int _abs(int n)
{
    return (n < 0 ? -n : n);
}

// _strlen.c
int _strlen(char *s)
{
    int len = 0;
    while (s[len])
        len++;
    return len;
}

// Additional function implementations would follow...
