#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list
 * @head: double pointer to list_t
 * @str: string new node is added to
 *
 * Return: pointer to the new node
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;

	new = malloc(sizeof(list_t *));
	if (str == NULL)
	{
		new->str = NULL;
		free(new);
		return (NULL);
	}
	if (new == NULL)
		return (NULL);
	new->next = *head;
	*head = new;
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	new->len = i;
	return (new);
}
