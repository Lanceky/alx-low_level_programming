#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 0; i < 8; ++i)
    {
        for (j = i + 1; j < 9; ++j)
        {
            for (k = j + 1; k < 10; ++k)
            {
                /* Print the smallest combination of three digits */
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');

                /* Check if it's the last combination to avoid printing the comma */
                if (i < 7 || j < 8 || k < 9)
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

