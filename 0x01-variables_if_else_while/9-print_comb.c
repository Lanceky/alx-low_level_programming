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
        /* Write the digit character to standard output */
        write(1, &(digit + '0'), 1);

        if (digit < 9)
        {
            /* Write the comma and space to separate digits */
            write(1, ",", 1);
            write(1, " ", 1);
        }
    }

    /* Write a new line at the end */
    write(1, "\n", 1);

    return (0);
}
