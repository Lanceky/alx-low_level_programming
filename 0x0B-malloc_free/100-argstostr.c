#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all arguments of the program into a single string.
* @ac: the number of arguments
* @av: the array of arguments
*
* Return: pointer to the new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len;

if (ac == 0 || av == NULL)
{
return (NULL);
}

len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++; /* for newline character */
}

str = (char *)malloc((len + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k++] = av[i][j];
}
str[k++] = '\n';
}
str[k] = '\0';

return (str);
}

