#include "main.h"

/**
 * print_alphabet - Alphabet in lowercase
 *
 * Return: 0 if successful
 *
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
