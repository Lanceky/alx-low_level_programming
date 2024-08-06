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
* skip_spaces - skips spaces in a string.
* @str: the string to process
*
* Return: pointer to the first non-space character
*/
char *skip_spaces(char *str)
{
while (*str == ' ')
{
str++;
}

return (str);
}

/**
* allocate_words - allocates memory for the words in the string.
* @str: the string to split
* @word_count: number of words
*
* Return: pointer to the array of strings, or NULL on failure
*/
char **allocate_words(char *str, int word_count)
{
char **words;
int i, len;

words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}

for (i = 0; i < word_count; i++)
{
str = skip_spaces(str);
len = word_len(str);
words[i] = (char *)malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (int j = 0; j < i; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
str += len;
}

words[word_count] = NULL;

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
int i, w, word_count;

if (str == NULL || *str == '\0')
{
return (NULL);
}

word_count = count_words(str);
if (word_count == 0)
{
return (NULL);
}

words = allocate_words(str, word_count);
if (words == NULL)
{
return (NULL);
}

i = 0;
while (*str)
{
str = skip_spaces(str);
if (*str)
{
word_len(str);
for (w = 0; w < len; w++)
{
words[i][w] = str[w];
}
words[i][w] = '\0';
i++;
str += len;
}
}

return (words);
}

