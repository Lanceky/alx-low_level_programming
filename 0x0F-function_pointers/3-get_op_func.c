#include "3-calc.h"

/**
* get_op_func - Selects the correct function to perform the operation.
* @s: The operator to check.
*
* Return: Pointer to the function that matches the operator, or NULL if none match.
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

if (s)
{
for (i = 0; ops[i].op; i++)
{
if (*(ops[i].op) == *s && *(s + 1) == '\0')
{
return (ops[i].f);
}
}
}

return (NULL);
}

