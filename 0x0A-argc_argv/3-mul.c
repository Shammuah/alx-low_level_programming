#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints product of first two integers
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;
        int j = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		for (i = 1; i < 3; i++)
		{
			j *= atoi(argv[i]);
		}

		printf("%d\n", j);
	}

	return (0);
}
