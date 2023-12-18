#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Initialize seed for random number generation */
    srand(time(0));

    /* Generate a random number and assign it to n */
    n = rand() - RAND_MAX / 2;

    /* Print the random number */
    printf("%d is ", n);

    /* Check if the number is positive, negative, or zero */
    if (n > 0)
        printf("positive\n");
    else if (n == 0)
        printf("zero\n");
    else
        printf("negative\n");

    return (0);
}

