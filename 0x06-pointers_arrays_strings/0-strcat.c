#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
    char *result = dest;

    /* Move to the end of dest */
    while (*dest)
        dest++;

    /* Copy src to dest */
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    /* Add null terminator at the end */
    *dest = '\0';

    return (result);
}

