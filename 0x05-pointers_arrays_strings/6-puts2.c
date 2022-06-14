#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character
 *of a string, starting with the first character
 * @str: string input
 *
 * Return: void
*/
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i += 2;
		if (i = '\0')
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
