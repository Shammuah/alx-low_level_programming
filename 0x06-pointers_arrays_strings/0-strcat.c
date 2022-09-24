#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: First string parameter
 * @src: Second string parameter
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

	dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (src_len = 0; src[src_len] != '\0'; src_len++)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
	}
	dest[dest_len] = src[src_len];

	return (dest);
}
