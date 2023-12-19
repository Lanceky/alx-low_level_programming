#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                /* Print the combination of three digits */
                write(1, &('0' + i), 1);
                write(1, &('0' + j), 1);
                write(1, &('0' + k), 1);

                if (!(i == 7 && j == 8 && k == 9))
                {
                    /* Write the comma and space to separate combinations */
                    write(1, ", ", 2);
                }
            }
        }
    }

    /* Write a new line at the end */
    write(1, "\n", 1);

    return (0);
}

