#include "main.h"
#include <stdio.h>

/**
 * main- Prints all arguments received
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
