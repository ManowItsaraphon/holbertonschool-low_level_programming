#include <stdio.h>

/**
 * main - print lowercase+uppercase alphabet a-z
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;

	for (n = 0; n < 52; n++)
	{
		putchar(alp[n]);
	}
	putchar('\n');
	return (0);
}
