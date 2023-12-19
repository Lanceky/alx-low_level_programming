#include <stdio.h>

int main(void)
{
    int count;
    unsigned long first = 1, second = 2, next;

    printf("%lu, %lu", first, second);

    for (count = 2; count < 98; ++count)
    {
        next = first + second;
        printf(", %lu", next);

        first = second;
        second = next;
    }

    printf("\n");

    return (0);
}

