/* 100-atoi.c */
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the input string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Handle signs */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Process digits */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
		if (result > (result * 10 + (s[i] - '0')) / 10)
		{
			/* Overflow, return max or min value based on sign */
			return (sign == 1 ? 2147483647 : -2147483648);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}

