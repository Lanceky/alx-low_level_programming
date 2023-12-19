#include <unistd.h>

int _putchar(char c);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		_putchar(digit);
		digit++;
	}

	_putchar('\n');

	return (0);
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

