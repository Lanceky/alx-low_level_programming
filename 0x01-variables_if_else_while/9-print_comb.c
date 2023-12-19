#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit;

    for (digit = 0; digit < 10; digit++)
    {
        write(1, &digit, 1);
        if (digit < 9)
        {
            write(1, ",", 1);
            write(1, " ", 1);
        }
    }

    write(1, "\n", 1);

    return (0);
}

