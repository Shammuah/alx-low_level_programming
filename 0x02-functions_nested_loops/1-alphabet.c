#include "main.h"

/**
 * main - Alphabet in lowercase
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
