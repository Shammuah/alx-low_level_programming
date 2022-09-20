#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: First parameter
 * @b: Second parameter
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp_var;

	temp_var = *a;
	*a = *b;
	*b = temp_var;
}
