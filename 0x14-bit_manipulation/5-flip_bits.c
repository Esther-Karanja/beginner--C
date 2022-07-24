#include "main.h"
#include <string.h>

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: flipped bits to get m from n
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size;
	unsigned int i;
	unsigned long int flip = 0;

	size = sizeof(n) * 8 - 1;

	for (i = 0; i < size; i++)
	{
		if ((n & 1) != (m & 1))
			flip++;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip);
}
