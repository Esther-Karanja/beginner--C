#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: first integer in array
 * @max: last integer in array
 *
 * Return: pointer to new array or NULL
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j;

	if (min > max)
		return (NULL);
	for (i = 0; i < (max - min); i++)

	ptr = (int *)malloc(i + 1 * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		ptr[j] = min++;
	}
	return (ptr);
}
