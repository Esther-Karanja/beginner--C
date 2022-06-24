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

	for ( i = 0; *s != '\0'; i++)
	{
		_putchar (*s);
		s++;
	}
	_putchar ('\n');
}
