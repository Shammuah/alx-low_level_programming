#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: The parameter
 *
 * Return: 1 if c is an alphabet, 0 if otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
