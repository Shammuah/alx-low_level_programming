#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: String to print in rev
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}
