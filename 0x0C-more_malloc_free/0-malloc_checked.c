#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer input
 *
 * Return: pointer to memory or 98
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
