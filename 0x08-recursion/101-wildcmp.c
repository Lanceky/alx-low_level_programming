#include "main.h"

/**
 * wildcmp - Compares two strings considering a wildcard '*'
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0') /* Both strings reached the end simultaneously */
        return (1);

    if (*s2 == '*') /* If s2 contains a '*' */
    {
        if (*s1 == '\0') /* If s1 is also at the end, skip over the '*' */
            return (wildcmp(s1, s2 + 1));
        if ((wildcmp(s1 + 1, s2)) || (wildcmp(s1, s2 + 1))) /* Try to match with or without consuming a character from s1 */
            return (1);
        return (0); /* If neither case matches, return 0 */
    }

    if (*s1 != *s2) /* If characters do not match */
        return (0);

    return (wildcmp(s1 + 1, s2 + 1)); /* Move to the next characters in both strings */
}

