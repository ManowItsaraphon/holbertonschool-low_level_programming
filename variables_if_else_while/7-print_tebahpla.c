#include <stdio.h>

/**
 * main - print a-z in reverse
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int n;

	for (n = 0; n < 26; n++)

	{
		putchar(alp[n]);
	}
		putchar('\n');
		return (0);
}
