/* File: _putchar.c */
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/* File: _islower.c */
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/* File: _isalpha.c */
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/* File: _abs.c */
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to check
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}

/* File: _isupper.c */
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/* File: _isdigit.c */
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* File: _strlen.c */
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/* File: _puts.c */
#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: The string to print
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}

/* File: _strcpy.c */
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* File: _atoi.c */
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

/* File: _strcat.c */
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* File: _strncat.c */
#include "main.h"

/**
 * _strncat - concatenates n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to concatenate
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* File: _strncpy.c */
#include "main.h"

/**
 * _strncpy - copies n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* File: _strcmp.c */
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 if s1 and s2 are equal,
 * negative if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/* File: _memset.c */
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: Char to copy
 * @n: Number of times to copy b
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/* File: _memcpy.c */
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/* File: _strchr.c */
#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

/* File: _strspn.c */
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to search
 * @accept: The bytes to include
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (count);
}

/* File: _strpbrk.c */
#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The bytes to search for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}

/* File: _strstr.c */
#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (!*needle)
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (!needle[j])
				return (haystack + i);
		}
	}
	return (NULL);
}
