#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x to the power of y
 * @x: Value
 * @y: Power
 * Return: Alway 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y-1));
}
