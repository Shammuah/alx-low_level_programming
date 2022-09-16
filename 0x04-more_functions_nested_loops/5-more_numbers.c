#include "main.h"

/**
 * more_numbers - Print 10 times the numbers 0 to 14.
 * Return: 0.
 */

void more_number(void)
{
	int num, num_times;

	for (num_times = 0; num_times <= 9; num_times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
