#include <stdlib.h>
#include "main.h"
/**
 * create_array - check the code for Holberton School students.
 * @size: argument for size of the array
 * @c: argument for char
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	my_array = malloc(sizeof(c) * size);

	if (my_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		my_array[i] = c;

	return (my_array);
}
