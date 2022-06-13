#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character
 *of a string, starting with the first character
 * @str: string input
 *
 * Return: characters printed
*/
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
		i = i + 2;
	while (i != '\0')

	{
		_putchar (*(str + i));
	}
	_putchar ('\n');
}
