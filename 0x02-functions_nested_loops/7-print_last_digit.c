#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Parameter
 *
 * Return: 0 if successful
 *
 */

int print_last_digit(int n)
{
	int last_n = n % 10;

	if (last_n < 0)
	{
		/**
		 * Absolute if less than 0
		 */
		last_n *= -1;
	}
	else
	{
		_putchar('0' + last_n);
		return (last_n);
	}
}
