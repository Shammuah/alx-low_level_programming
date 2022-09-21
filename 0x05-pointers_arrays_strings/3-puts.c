#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string, followed by a new line
 * @str: String parameter
 * Return: Always 0
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c] != 0)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
