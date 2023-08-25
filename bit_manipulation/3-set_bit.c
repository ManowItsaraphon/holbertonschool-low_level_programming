#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: number
 * @index: index to set
 * Return: 1 if works or -1 if errors
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}
