/* 6-puts2.c */
#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: Pointer to the input string
 */
void puts2(char *str)
{
	if (str == NULL)
		return;

	while (*str != '\0')
	{
		printf("%c", *str);
		str += 2; /* Move to every other character */
	}

	printf("\n");
}

