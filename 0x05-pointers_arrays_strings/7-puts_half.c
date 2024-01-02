#include "main.h"

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	/* Find the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate the starting position for printing */
	start = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;

	/* Print the second half of the string */
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

