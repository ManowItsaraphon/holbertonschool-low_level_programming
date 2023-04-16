#include "main.h"

/**
 * more_numbers - to print 0-14 x 10 times
 *
 * char s:1-14
 * i: times
 * j: character in string
 *
 * Return: 0
 *
 */

void more_numbers(void)

{
	char s[21] = "01234567891011121314";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 20; j++)
		{
		_putchar(s[j]);
		}
	_putchar('\n');
	}
}
