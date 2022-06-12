#include "main.h"

/**
 * times_table - function that prints the 9 times table starting with zero
 *
 * Return: 0 (success)
*/
void times_table(void)
{
	int row;
	int col;
	int res;

	for (row = 0; row <= 9; row++)
	{
		_putchar ('0');
		_putchar (',');
		_putchar (' ');

		for (col = 1; col <= 9; col++)
		{
			res = (row * col);

			if ((res / 10) > 0)
			{
				_putchar ((res / 10) + '0');
			}
			else
			{
				_putchar (' ');
			}
			_putchar ((res % 10) + '0');

			if (col > 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
