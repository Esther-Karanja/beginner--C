#include "main.h"
#include <string.h>

/**
 * get_bit - function that returns the value
 * of a bit at a given index
 * @n: integer to get the bit from
 * @index: index of the n to get the bit from
 *
 * Return: the value of the bit at index or -1 (error)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 7;

	if (index > size)
		return (-1);
	else
		return ((n >> index) & 1);
}
