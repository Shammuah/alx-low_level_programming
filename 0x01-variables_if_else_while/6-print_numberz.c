#include <stdio.h>

/**
 * main - Single digit numbers in base 10
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
