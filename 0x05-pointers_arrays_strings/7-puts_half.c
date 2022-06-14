#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string characters
 *
 * Return: string printed
*/
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (*(str + i))
		i++;
	j += 1;
	while (j < i)
	{
		_putchar (*(str + j));
			j++;
	}
	_putchar ('\n');
}
