#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 on success, or exits with status 1 or 2 on errors.
 */
int main(int argc, char *argv[])
{
unsigned char *ptr;
int i, num_bytes;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}

ptr = (unsigned char *)main;

for (i = 0; i < num_bytes; i++)
{
if (i > 0)
{
printf(" ");
}
printf("%02x", ptr[i]);
}
printf("\n");

return (0);
}

