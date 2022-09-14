#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet
 *
 * Return: 0 if successful
 *
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 1; 1 <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
