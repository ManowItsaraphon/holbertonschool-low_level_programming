#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: int
 * @b: int
 * Return: 0
 *
 */

void swap_int(int *a, int *b)

	{	int c = *a;
		*a = *b;
		*b = c;
	}
