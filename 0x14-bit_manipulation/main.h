#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>  /* For NULL definition */

/* Function prototypes for task 0 */
unsigned int binary_to_uint(const char *b);

/* Function prototypes for task 1 */
void print_binary(unsigned long int n);

/* Function prototypes for task 2 */
int get_bit(unsigned long int n, unsigned int index);

/* Function prototypes for task 3 */
int set_bit(unsigned long int *n, unsigned int index);

/* Function prototypes for task 4 */
int clear_bit(unsigned long int *n, unsigned int index);

/* Function prototypes for task 5 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Function prototypes for task 6 */
int get_endianness(void);

/* Prototype for _putchar function */
int _putchar(char c);

#endif /* MAIN_H */

