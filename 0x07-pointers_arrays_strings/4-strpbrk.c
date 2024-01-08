#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the string to be checked
 * @accept: pointer to the substring containing acceptable characters
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;

		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}

			accept++;
		}

		if (found == 0)
			break;

		s++;
		accept = accept - count;
	}

	return (count);
}

