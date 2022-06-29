#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory,which contains a copy
 * of the string given as a parameter.
 * @str: string
 *
 * Return: pointer to the duplicated string or NULL
*/
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *new;

	if (str == 0)
		return (NULL);
	if (str != 0)
	new = malloc(i + 1 * sizeof(char));
	if (new != 0)
	{
		for (i = 0; str[i] != '\0'; i++)
			new[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	new[i] = '\0';
	return (new);
}
