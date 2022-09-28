#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Returns a pointer to dest
 * @dest: Memory area to copy to
 * @src: Memory area to copy from
 * @n: Number of bytes
 * Return: Nothing
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
