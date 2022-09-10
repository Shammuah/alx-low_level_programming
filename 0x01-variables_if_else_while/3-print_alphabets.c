#include <stdio.h>

/**
 * main - alphabets in lowercase then in uppercase
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	a = 'A';
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
