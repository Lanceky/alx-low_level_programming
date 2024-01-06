#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *str)
{
	int i, j;
	char leetMap[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leetReplace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetMap[j] != '\0'; j++)
		{
			if (str[i] == leetMap[j])
			{
				str[i] = leetReplace[j];
				break;
			}
		}
	}

	return (str);
}

