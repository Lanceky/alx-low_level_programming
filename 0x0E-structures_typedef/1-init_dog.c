/* 1-init_dog.c */
#include <stddef.h>  // For NULL
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to a dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

