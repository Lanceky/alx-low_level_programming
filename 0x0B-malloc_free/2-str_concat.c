#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to a newly allocated space in memory containing s1 followed by s2, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    char *result;
    int len1, len2, i, j;

    /* Handle NULL inputs by treating them as empty strings */
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }

    /* Get lengths of both strings */
    len1 = strlen(s1);
    len2 = strlen(s2);

    /* Allocate memory for the concatenated result (+1 for the null terminator) */
    result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL)
    {
        return (NULL);
    }

    /* Copy first string to result */
    for (i = 0; i < len1; i++)
    {
        result[i] = s1[i];
    }

    /* Copy second string to result */
    for (j = 0; j < len2; j++)
    {
        result[i + j] = s2[j];
    }

    /* Null terminate the result */
    result[i + j] = '\0';

    return (result);
}

