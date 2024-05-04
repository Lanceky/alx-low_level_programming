#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively
 * @s: The string to check
 * @start: The index of the first character
 * @end: The index of the last character
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);

	return (is_palindrome_recursive(s, 0, length - 1));
}

