#include "main.h"
#include <stdlib.h>

/**
* word_len - finds the length of a word.
* @str: the string to check
*
* Return: length of the word
*/
int word_len(char *str)
{
int len = 0;

while (str[len] != '\0' && str[len] != ' ')
{
len++;
}

return (len);
}

/**
* count_words - counts the number of words in a string.
* @str: the string to check
*
* Return: number of words
*/
int count_words(char *str)
{
int words = 0;

while (*str)
{
while (*str == ' ')
{
str++;
}

if (*str)
{
words++;
while (*str && *str != ' ')
{
str++;
}
}
}

return (words);
}

/**
* strtow - splits a string into words.
* @str: the string to split
*
* Return: pointer to an array of strings (words), or NULL on failure
*/
char **strtow(char *str)
{
char **words;
int i, w, len, word_count;

if (str == NULL || *str == '\0')
{
return (NULL);
}

word_count = count_words(str);
if (word_count == 0)
{
return (NULL);
}

words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}

i = 0;
while (*str)
{
while (*str == ' ')
{
str++;
}

if (*str)
{
len = word_len(str);
words[i] = (char *)malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (w = 0; w < i; w++)
{
free(words[w]);
}
free(words);
return (NULL);
}

for (w = 0; w < len; w++)
{
words[i][w] = str[w];
}
words[i][w] = '\0';
i++;
str += len;
}
}

words[i] = NULL;

return (words);
}

