#include "main.h"

/**
 * more_numbers - prints the numbers 0-14 ten times
 *
 *
*/
void more_numbers(void)
{
	int num;
	int nums;

	for (num = 0; num <= 9; num++)
	{
		for (nums = 0; nums <= 14; nums++)

			if (nums > 9)

			{
				_putchar ((nums / 10) + '0');
			_putchar ((nums % 10) + '0');
			}
	_putchar ('\n');
	}
}
