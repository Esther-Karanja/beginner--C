#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: always 0
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
