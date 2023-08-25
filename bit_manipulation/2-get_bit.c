#include "main.h"

/**
 * get_bit - set the value of a bit to 1 at a given index
 * @n: number base
 * @index: index to get
 *
 * Return: return 1 if works, or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	return ((n >> index) & 1);
}
