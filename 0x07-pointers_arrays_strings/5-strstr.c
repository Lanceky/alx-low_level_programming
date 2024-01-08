#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be located
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
			return start;

		haystack = start + 1;
	}

	return NULL;
}

