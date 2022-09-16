#include "main.h"

/**
 * print_diagonal - Draw diagonal line
 * @n: Length of line
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(" ");
		_putchar("\\");
		_putchar("\n");
	}
	_putchar("\n");
}
