#include <stdio.h>

/**
 * main - Numbers of base 16
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char a = 0;
	
	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}
	
	a = 'a';

	while (a < 'g')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
