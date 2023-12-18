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

    /* Get the last digit of the number */
    int lastDigit = n % 10;

    /* Print the result */
    printf("Last digit of %d is %d and is ", n, lastDigit);

    /* Check the conditions for the last digit */
    if (lastDigit > 5)
        printf("greater than 5\n");
    else if (lastDigit == 0)
        printf("0\n");
   

