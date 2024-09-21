#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the contents of a struct dog.
 * If an element is NULL, it prints (nil) instead.
 */
void print_dog(struct dog *d)
{
if (d != NUL)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
