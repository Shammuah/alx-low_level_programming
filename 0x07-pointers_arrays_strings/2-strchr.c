#include "main.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to the first occurrence of a character
 * @s: String
 * @c: Character in the string
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] <= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return (0);
}
