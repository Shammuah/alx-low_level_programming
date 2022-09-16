#include "main.h"

/**
 * print_number - prints the numbers from 0 to 9.
 * Return: Always 0.
 */

void print_number(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + '0');
		num ++;
	}
	_putchar('\n');
}
