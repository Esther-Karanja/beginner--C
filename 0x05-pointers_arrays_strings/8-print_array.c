#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints elements
 * @a: array input
 * @n: number of elements
 *
 * Return: elements of arrays in integers
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
