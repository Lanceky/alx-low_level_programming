#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *hex = "0123456789abcdef";

	write(1, hex, 16);
	write(1, "\n", 1);

	return (0);
}
