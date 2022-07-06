#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array input
 * @size: size of array to be searched
 * @cmp: pointer to the function used to compare values
 *
 * Return: index of the first element for which the cmp
 * does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmp(array[i + 1]);
		return (i);
	}
	return (-1);
}
