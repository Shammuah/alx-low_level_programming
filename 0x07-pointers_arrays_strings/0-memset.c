#include "main.h"
#include <stdio.h>

/**
 * _memset - Returns pointer to memory area s
 * @s: Memory area
 * @b: Byte
 * @n: Integer
 * Return: Nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index+)
	{
		s[index] = b;
	}
	return (s);
}
