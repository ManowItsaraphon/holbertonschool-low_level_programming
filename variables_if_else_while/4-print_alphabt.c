#include <stdio.h>

/**
 * main - Print a-z except e and q
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
