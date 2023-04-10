#include "main.h"

/**
 * _islower - is to check lowercase alphabet
 * @c: from ASCII
 * Return: 1 if c is lowercase. 0 for the rest
 *
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
