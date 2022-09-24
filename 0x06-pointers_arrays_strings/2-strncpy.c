#include "main.h"

/**
 * _strncpy - Copies an inputted string
 * @dest: String buffer
 * @src: String source
 * @n: Number of bytes
 * Return: Pointer to string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; (index < n) && (src[index] != '\0'); index++)
		dest[index] = src[index];

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
