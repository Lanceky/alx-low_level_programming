#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array.
* @array: The array to search.
* @size: The number of elements in the array.
* @cmp: Pointer to the function used for comparison.
*
* Return: The index of the first element for which cmp does not return 0,
* or -1 if no match is found or size is less than or equal to 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
{
return (-1);
}

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}

return (-1);
}

