#include <unistd.h>

/**
 * _putchar - print char c
 *
 * Return: 1 if successful
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
