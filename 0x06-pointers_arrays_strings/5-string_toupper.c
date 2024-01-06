#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The string to convert.
 *
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= ('a' - 'A');
		ptr++;
	}

	return str;
}

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}

