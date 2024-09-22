#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: Pointer to dog to free
 *
 * Description: This function frees memory allocated for a struct dog.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
