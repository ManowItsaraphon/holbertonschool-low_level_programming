#include "main.h"

/**
 * rev_string - to reverses a string
 * @s: input string
 * return: 0
 */

void rev_string(char *s)
{
	char rev = s[0];
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;
	}
}
