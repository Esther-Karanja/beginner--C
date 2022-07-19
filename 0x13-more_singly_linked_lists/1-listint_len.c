#include "lists.h"

/**
 * listint_len - function that returns the number of elements in
 * a linked listint_t list
 * @h: pointer to the linked list
 *
 * Return: number of elements in linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t elem = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		elem++;
	}
	return (elem);
}
