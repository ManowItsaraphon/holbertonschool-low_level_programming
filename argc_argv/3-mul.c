#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - to multiply two number
 * @argc: number of command line arguments
 * @argv: array that contains the arguments
 * Return: 0 and 1 if error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
