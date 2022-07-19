#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer to the node
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *move;

	while (*head != NULL)
	{
		move = (*head)->next;
		free(*head);
		*head = move;
	}
}
