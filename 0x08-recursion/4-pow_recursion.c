#include "main.h"
#include <string.h>

/**
 * _pow_recursion - function that returns the value of x raised
 * to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: 1 (success) or -1 (error)
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
	else
		return (x * _pow_recursion(x, y - 1));
}
