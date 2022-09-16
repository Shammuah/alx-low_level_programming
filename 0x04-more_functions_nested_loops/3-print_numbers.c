#include "main.h"

/**
 * main - prints the numbers from 0 to 9.
 * Return: Always 0.
 */

void print_number(void)
{
	int num;

	while (num <= 9)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
