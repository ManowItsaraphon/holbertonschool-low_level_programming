#include "main.h"

/**
 * _isalpha - is to check both upper and  lowercase alphabet
 * @c: from ASCII
 * Return: 1 if c is lowercase or uppercase alphabet. 0 for the rest
 *
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
