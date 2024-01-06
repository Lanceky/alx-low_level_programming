#include <stdio.h>

int main(void)
{
    int a[5];
    int *p;

    a[2] = 102;
    p = &a[2] - 2;

    /* Your code goes here */
    *(p + 5) = 98;

    printf("a[2] = %d\n", a[2]);
    return (0);
}

