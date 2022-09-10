#include <stdio.h>

/**
 * main - alphabets in lowercase
 *
 * Return - 0 if successful
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
	putchar('\n');
	return (0);
}
