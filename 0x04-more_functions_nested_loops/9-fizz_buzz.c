#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			_putchar("FizzBuzz");
		else if (i % 3 == 0)
			_putchar("Fizz");
		else if (i % 5 == 0)
			_putchar("Buzz");
		else
			print_number(i);

		if (i < 100)
			_putchar(" ");
	}
	_putchar("\n");

	return (0);
}

