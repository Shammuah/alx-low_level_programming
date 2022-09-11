#include <stdio.h>

/**
 * main - print 0 - 9
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
