#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Input string.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1;

	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'z') && capitalize)
			*ptr = *ptr - 'a' + 'A';

		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' ||
		    *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' ||
		    *ptr == ')' || *ptr == '{' || *ptr == '}')
			capitalize = 1;
		else
			capitalize = 0;

		ptr++;
	}

	return (str);
}

