#include "main.h"

char rot13_table[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

/**
 * rot13 - Encodes a string using rot13.
 * @str: Input string.
 *
 * Return: Pointer to the resulting string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	int i;

	while (*ptr)
	{
		for (i = 0; (i < 52) && ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z')); i++)
		{
			if ((*ptr == rot13_table[i]) || (*ptr == rot13_table[i] + 32))
			{
				*ptr = (i < 26) ? rot13_table[i + 26] : rot13_table[i - 26];
				break;
			}
		}
		ptr++;
	}

	return str;
}

