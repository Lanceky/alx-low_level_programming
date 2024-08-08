/* main_0.c */
#include <stdio.h>
#include "dog.h"

/**
 * main - Check the code for initializing a dog structure
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    /* Initialize the dog structure */
    init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");

    /* Print the dog's information */
    printf("My name is %s, and I am %.2f years old.\n", my_dog.name, my_dog.age);
    printf("Owner: %s\n", my_dog.owner);

    return (0);
}

