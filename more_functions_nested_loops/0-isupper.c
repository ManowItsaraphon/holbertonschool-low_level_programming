#include "main.h"

/**
 * _isupper - check uppercase 
 * @c: input char
 * Return: 1 if c is uppercase otherwise 0
 *
 */

int _isupper(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
