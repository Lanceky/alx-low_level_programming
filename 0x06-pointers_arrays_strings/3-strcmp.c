#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Negative if s1 is less than s2,
 *         Positive if s1 is greater than s2,
 *         0 if s1 is equal to s2.
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	diff = *(unsigned char *)s1 - *(unsigned char *)s2;
	return (diff);
}

