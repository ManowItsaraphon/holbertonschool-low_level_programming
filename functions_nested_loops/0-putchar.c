int _putchar(char C);
/**
 * main - print _putchar
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char c[9] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
	{
		_putchar(c[n]);
	}
	_putchar('\n');
	return (0);
}
