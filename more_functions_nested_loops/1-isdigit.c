#include "main.h"

/**
 * _isdigit - check number 0-9
 * @c: input number
 * Return: 1 if c is number, otherwise 0
 *
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
