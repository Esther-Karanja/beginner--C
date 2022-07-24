#include "main.h"
#include <string.h>

/**
 * set_bit - function that sets the value of
 * a bit to 1 at a given index
 * @n: pointer to the integer
 * @index: index to set to 1
 *
 * Return: 1 for success or -1 fir failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;
	unsigned long int size;

	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);

	set = 1 << index;
	*n = *n | set;
	return (1);
}
