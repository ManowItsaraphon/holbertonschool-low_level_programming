#include "3-calc.h"

/**
 * op_add - Add to numbers
 * @a: number 1
 * @b: number 2
 * Return: sum
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract to numbers
 * @a: number 1
 * @b: number 2
 * Return: rest two numbers
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply to numbers
 * @a: number 1
 * @b: number 2
 * Return: the result of multiply a with b
 **/

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: number 1
 * @b: number 2
 * Return: division
 **/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo
 * @a: number 1
 * @b: number 2
 * Return: modulo
 **/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
