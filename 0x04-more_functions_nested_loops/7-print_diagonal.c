#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ is repeated
 *
 i* Return: 0 (success)
*/
void print_diagonal(int n)
{
	int row;
	int col;

	for (row = 0; row < n; row++)
	{
		for (col = 0; col < row; col++)
		{
			_putchar (32);
		}
		_putchar (92);
		_putchar ('\n');
	}
	if (n <= 0)
		_putchar ('\n');
}
