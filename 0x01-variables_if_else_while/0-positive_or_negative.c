#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - positive or negative random number
 *
 * Return: zero if successful
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	/**
	 * n = range 0 - rand_max
	 *
	 */
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
