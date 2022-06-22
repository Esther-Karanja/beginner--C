#include "main.h"
#include <string.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 *
 * Return: 1 on success or -1 for error
*/
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i * i < 0)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (_sqrt_recursion(i + 1));
	}
	return (1);
}
