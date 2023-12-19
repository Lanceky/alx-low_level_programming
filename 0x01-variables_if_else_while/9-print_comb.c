#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i < 10; ++i)
    {
        for (j = i + 1; j < 10; ++j)
        {
            /* Check if the two digits are different */
            if (i != j)
            {
                /* Print the smallest combination of two digits */
                putchar(i + '0');
                putchar(j + '0');

                /* Check if it's the last combination to avoid printing the comma */
                if (i < 8 || j < 9)
                {
                    /* Print the separator */
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    /* Print a newline at the end */
    putchar('\n');

    return 0;
}

