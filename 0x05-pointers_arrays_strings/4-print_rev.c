#include "main.h"
#include <string.h>

/**
 * print_rev -  function that prints a string, in reverse
 * @s: string output
 *
 * Return: the string in reverse
*/
void print_rev(char *s)
{
	int len;
	int i;

	while ((*(s + i) - 1) != '\n')
		i--;

	_putchar('\n');
}
