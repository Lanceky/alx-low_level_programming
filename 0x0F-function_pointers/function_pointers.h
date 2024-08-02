#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* Function prototypes for Task 0 */
void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

/* Function prototypes for Task 1 */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function prototypes for Task 2 */
int int_index(int *array, int size, int (*cmp)(int));

/* Function prototypes for Task 3 */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* FUNCTION_POINTERS_H */

