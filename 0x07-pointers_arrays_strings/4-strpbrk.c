#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string to be searched
 * @accept: pointer to the substring containing acceptable characters
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *tmp = accept;

		while (*tmp)
		{
			if (*s == *tmp)
				return s;

			tmp++;
		}

		s++;
	}

	return (NULL);
}

