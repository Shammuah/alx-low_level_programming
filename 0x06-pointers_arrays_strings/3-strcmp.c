#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String one
 * @s2: String two
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while ((s1[index] != '\0') && (s2[index] != '\0'))
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}

	if (s1[index] == s2[index])
		return (0);
	return (s1[index] - s2[index]);
}
