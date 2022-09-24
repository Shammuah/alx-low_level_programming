#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: First string parameter
 * @src: Second string parameter
 * @n: Number of bytes
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len;

	dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (src_len = 0; src[src_len] && src_len < n; src_len++)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
	}
	if (dest[dest_len - 1] != '\0')
		dest[dest_len] = '\0';

	return (dest);
}
