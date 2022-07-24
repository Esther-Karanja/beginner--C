#include "main.h"
#include <string.h>

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 * @b: string of binary numbers
 *
 * Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int dec;

	dec = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec <<= 1;
		if (b[i] == '1')
			dec += 1;
	}
	return (dec);
}
