#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory.
 * @old_size: Size of the old memory block.
 * @new_size: Size of the new memory block.
 *
 * Return: Pointer to the newly allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *new_ptr, *old_ptr;
    unsigned int i, size;

    if (new_size == old_size)
        return ptr;
    if (ptr == NULL)
        return malloc(new_size);
    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return NULL;

    old_ptr = ptr;
    size = old_size < new_size ? old_size : new_size;
    for (i = 0; i < size; i++)
        new_ptr[i] = old_ptr[i];
    
    free(ptr);

    return new_ptr;
}

