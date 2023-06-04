#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: paramater for string 1
 * @s2: parameter for string 2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *my_array;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;
	my_array = malloc(sizeof(char) * (i + j + 1));

	if (my_array == NULL)
	{
		free(my_array);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		my_array[k] = s1[k];

	l = j;
	for (j = 0; j <= l; k++, j++)
		my_array[k] = s2[j];

	return (my_array);
}
