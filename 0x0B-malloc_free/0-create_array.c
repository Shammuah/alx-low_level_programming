#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array 
 * @size: Size of array
 * @c: The char to be assigned to
 * Return: Pointer to array, NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
