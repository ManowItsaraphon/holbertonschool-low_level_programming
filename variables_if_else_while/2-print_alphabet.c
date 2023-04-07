#include <stdio.h>

/**
 * main - print lowercase alphabet a-z
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alp[n]);
	}
	putchar('\n');
	return (0);
}
