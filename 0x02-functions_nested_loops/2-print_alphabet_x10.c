#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: always 0 (success)
*/
void print_alphabet_x10(void)
{
	int num;
	int alph;

	for (num = 0; num < 10; num++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
