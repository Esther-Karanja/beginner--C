#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 *
 * Return: 0 (success)
*/
void print_square(int size)
{
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col == row; col++)
		{
			_putchar (35);
			_putchar ('\n');
		}
	}
	if (size <= 0)
		_putchar ('\n');
}
