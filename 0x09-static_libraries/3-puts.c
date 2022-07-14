#include "main.h"
#include <string.h>

/**
 * _puts- function that prints content of a string
 * @s: string to print
 *
 * Return: pointer to the string
*/
void _puts(char *s)
{
	int i;

	while (*(s + i) != '\0')
	{
		_putchar (*(s + i));
		i++;
	}
	_putchar ('\n');
}
