#include "main.h"

/**
 * _abs - to get the result in an absolute int
 *
 * @a: input number
 *
 * Return: absolute value
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
