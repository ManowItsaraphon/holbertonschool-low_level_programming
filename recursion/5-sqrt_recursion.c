#include "main.h"

/**
 * checksqrt - check the input number
 * @n: number
 * @sqrt1: base number
 * Return: square root of number
 */

int checksqrt(int n, int sqrt1)
{
	if (n * n == sqrt1)
		return (n);
	if (n * n > sqrt1)
		return (-1);
	return (checksqrt(n + 1, sqrt1));
}

/**
 * _sqrt_recursion - return the natural square root of a number n
 * @n: number to check for square root
 * Return: the natural square root of number n
 */

int _sqrt_recursion(int n)
{
	return (checksqrt(1, n));
}
