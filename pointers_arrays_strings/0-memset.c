#include "main.h"

/**
 * _memmset - fills memory with a constant byte
 * @s: memory pointer
 * @b: constants byte
 * @n: bytes filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
