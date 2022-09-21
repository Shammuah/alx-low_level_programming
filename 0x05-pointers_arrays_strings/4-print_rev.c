#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print a string in reverse, followed by a new line
 * @s: String parameter
 * Return: Always 0
 */

void print_rev(char *s)
{
	int str_len = strlen(s);

	while (str_len--)
	{
		_putchar(s[str_len]);
	}
	_putchar('\n');
}
