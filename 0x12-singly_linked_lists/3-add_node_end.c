#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: double pointer to first element
 * @str: string of nodes
 *
 * Return: pointer to new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (str == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	if (*head == NULL)
	{
		*head = new;
		new->len = i;
		new->str = strdup(str);
		new->next = NULL;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
