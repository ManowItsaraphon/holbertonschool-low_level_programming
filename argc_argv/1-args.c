#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array that contains the arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
