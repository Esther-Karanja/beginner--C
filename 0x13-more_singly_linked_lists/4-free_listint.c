#include "list.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the list
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *move;

	while (head != NULL)
	{
		move = move->next;
		free(head);
		head = move;
	}
}
