#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to append to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *result = dest;

    /* Move to the end of dest */
    while (*dest)
        dest++;

    /* Copy up to n bytes from src to dest */
    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    /* Add null terminator at the end */
    *dest = '\0';

    return result;
}


