#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: An array of integers
 * @n: The number of elements to swap
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int index, temp;

	for (index = 0; index < n; index++)
	{
		temp = a[n - 1];
		a[n - 1] = a[index];
		a[index] = temp;
		n--;
	}
}
