#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of command-line arguments.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * 
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Ignore unused parameter warning */
	printf("%d\n", argc - 1);
	return (0);
}

