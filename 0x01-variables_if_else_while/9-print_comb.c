#include <stdio.h>

/**
 * main - Single digits separated by comma and whitespace
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
