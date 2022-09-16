#include "main.h"

/**
 * print_diagonal - Draw diagonal line
 * @n: Length of line
 * Return: 0
 */

void print_diagonal(int n)
{
	int length, space;

	for (length = 0; length < n; length++)
	{
		for (space = 0; space < length; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
	{
		_putchar('\n'');
	}
}
