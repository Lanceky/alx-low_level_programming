#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Old size of the allocated space
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the new memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
char *old_ptr;
unsigned int i, min_size;

if (new_size == old_size)
return ptr;

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return NULL;
return new_ptr;
}

if (new_size == 0)
{
free(ptr);
return NULL;
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return NULL;

old_ptr = (char *)ptr;
min_size = (old_size < new_size) ? old_size : new_size;

for (i = 0; i < min_size; i++)
new_ptr[i] = old_ptr[i];

free(ptr);

return new_ptr;
}

