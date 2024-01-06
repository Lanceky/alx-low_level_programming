#include <stdio.h>

/**
 * _strcmp - Compare two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Negative if s1 is less than s2,
 *         Positive if s1 is greater than s2,
 *         0 if s1 is equal to s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}

