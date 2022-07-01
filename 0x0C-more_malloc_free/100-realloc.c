#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @old_size: bytes of allocated space for pointer
 * @new_size: bytes of new memory block
 * @ptr: pointer to memory previously allocated to old_size
 *
 * Return: pointer to new_size or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;

	if (new_size > old_size)
	{
		ptr1 = malloc(sizeof(new_size));
		free(ptr);
		return (ptr1);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr1 = malloc(sizeof(new_size));
		free(ptr);
		return (ptr1);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
