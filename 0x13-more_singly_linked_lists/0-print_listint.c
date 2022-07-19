#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to list to print
 *
 * Return: number of elements in the string
*/
size_t print_listint(const listint_t *h)
{
	size_t elem = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		elem++;
	}
	return (elem);
}
