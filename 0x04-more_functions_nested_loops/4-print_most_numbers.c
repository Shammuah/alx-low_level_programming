#include "main.h"

/**
 * print_most_numbers - Prints 0 to 9, skips 2 and 4.
 * Return: 0.
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
		{
			_putchar('0' + num);
			num++;
		}
		else
		{
			num++;
		}
	}
	_putchar('\n');
}
