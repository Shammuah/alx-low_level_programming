#include <stdio.h>

/**
 * main - Alphabet in lowercase; skip q and e
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			a++;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
