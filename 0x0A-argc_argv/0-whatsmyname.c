#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * 
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
    (void)argc;  /* Ignore unused parameter warning */
    printf("%s\n", argv[0]);
    return (0);
}

