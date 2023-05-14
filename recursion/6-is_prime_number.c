#include "main.h"

/**
 * checkprime - to check if input number is a prime number
 * @n: input number
 * @i: iterator
 * @limit: to stop
 * Return: 1 or 0
 */

int checkprime(int n, int i, int limit)
{
	if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
		return (0);
	else if (n % i != 0 && i <= limit)
		return (checkprime(n, i + 1, limit));
	else
		return (1);
}
/**
 * is_prime_number - to return 1 if input number is a prime number
 * @n: input number
 * Return: 0 if it not a prime number or 1 if it is a prime number
 */
int is_prime_number(int n)
{
	return (checkprime(n, 2, n / 2));
}
