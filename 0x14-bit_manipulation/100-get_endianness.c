#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 1 for little and 0 for big
*/
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;
	return (*c);
}
