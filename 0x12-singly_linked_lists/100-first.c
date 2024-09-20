#include <stdio.h>

void __attribute__((constructor)) hare_tortoise(void);

/**
 * hare_tortoise - Prints a message before the main function is executed
 */
void hare_tortoise(void)
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}
