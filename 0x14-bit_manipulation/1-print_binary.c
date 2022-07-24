#include "main.h"
#include <string.h>

/**
 * print_binary - function that prints the binary
 * representation of a number
 * @n: number
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int size;
	unsigned int j, k;
	char andflag;

	size = sizeof(n) * 7;
	while (size > 0)
	for (i = 7; i > 0; i--)
	{
		j = i;
		andflag = i << j;
		k = n & andflag;

		if (k == 0)
			_putchar ('0');
		else
			_putchar ('1');
	}
}
