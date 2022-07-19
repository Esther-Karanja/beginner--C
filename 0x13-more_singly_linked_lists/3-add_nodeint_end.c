#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a node at the end of the link list
 * @head: double pointer to stat of the list
 * @n: number of elements in list
 *
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	new = malloc(sizeof(listint_t *));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (*head)
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	else
		*head = new;
	return (new);
}
