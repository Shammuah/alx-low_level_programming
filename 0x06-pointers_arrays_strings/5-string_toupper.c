#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: String parameter
 * Return: Always 0
 */

char *string_toupper(char *)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
