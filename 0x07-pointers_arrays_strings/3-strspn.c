#include "main.h"
#include <stdio.h>

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * @s: Segment
 * @accept: Bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int s_index, accept_index, b = 0;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				b++;
				break;
			}
		}
		if (accept[accept_index] == '\0')
			break;
	}
	return (b);
}	
