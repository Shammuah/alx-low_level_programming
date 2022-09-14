#include "main.h"
#include <stdio.h>

/**
 * main - print _putchar
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char* letters[8] = {"_","p","u","t","c","h","a","r"};
	char letter;

	for (letter = 0; letter < 8; letter++)
	{
		_putchar(letters[letter]);
	}
	_putchar('\n');
	return (0);
}
