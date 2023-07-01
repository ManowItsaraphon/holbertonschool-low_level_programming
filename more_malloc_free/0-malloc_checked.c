#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: numbers of bytes
 * Return: ponter to theallocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
