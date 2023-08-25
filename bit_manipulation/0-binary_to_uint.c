#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: point to a string of 0 and 1 char
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, mul;
	unsigned int n;

	if (!b)
		return (0);

	for (i = n = 0; b[i] != 0; i++)
		if (b[i] != 48 && b[i] != 49)
			return (n);

	for (i -= 1, mul = 0; i >= 0; i--, mul++)
	{
		if (b[i] == 48)
			continue;
		n += 1 << mul;

	}

	return (n);
}
