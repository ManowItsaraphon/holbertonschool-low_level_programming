#include "main.h"

/**
 * strlen - return the length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
	{
		int a = 0;

		while (*(s + a) != '\0')
			a++;
		return (a);
	}

