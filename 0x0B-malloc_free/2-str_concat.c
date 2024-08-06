#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings into a newly allocated space.
* @s1: the first string
* @s2: the second string
*
* Return: pointer to the concatenated string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j, len1, len2;

len1 = (s1 == NULL) ? 0 : (unsigned int)strlen(s1);
len2 = (s2 == NULL) ? 0 : (unsigned int)strlen(s2);

concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
concat[i] = s1[i];
}

for (j = 0; j < len2; j++)
{
concat[i + j] = s2[j];
}

concat[i + j] = '\0';

return (concat);
}

