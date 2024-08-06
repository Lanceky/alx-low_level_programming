#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenates s1 and the first n bytes of s2
 * @s1: The first string
 * @s2: The second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated space in memory
 *         If function fails, returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1, len2, i, j;
len1 = (s1 == NULL) ? 0 : strlen(s1);
len2 = (s2 == NULL) ? 0 : strlen(s2);
if (n >= len2)
{
n = len2;
}
concat = malloc(len1 + n + 1);
if (concat == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
concat[i] = s1[i];
}
for (j = 0; j < n; j++)
{
concat[i + j] = s2[j];
}
concat[i + j] = '\0';
return (concat);
}

