#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the beginning of linked list
 * @n: value of new node
 *
 * Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	dlistint_t *tail;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	tail = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	tail->next = new;
	new->prev = tail;
	new->next = NULL;
	tail = new;
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
