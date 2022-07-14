#include "lists.h"
#include <stdlib.h>

/**
 * list_len -  function that returns the number of elements in a
 * linked list_t list
 * @h: pointer to the first elememt of list_t
 *
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}

	return (i);
}
