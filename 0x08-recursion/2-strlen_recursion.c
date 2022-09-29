#include "main.h"
#include <stdio.h>

/**
 *  _strlen_recursion - Returns the length of a string
 *  @s: String to print
 *  Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int index = 0;

	if (*s > '\0')
	{
		index = index + (_strlen_recursion(s + 1) + 1);
	}
	return (index);
}
