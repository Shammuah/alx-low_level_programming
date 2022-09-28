#include "main.h"
#include <stdio.h>

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * @s: Segment
 * @accept: Bytes
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, b = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				b++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (b);
}	
