#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the first node of a linked list
 *
 * Return: sum of all data or 0 if empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
