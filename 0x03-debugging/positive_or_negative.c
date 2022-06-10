#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - tests if integer is positive or negative
 * @i: input
 *
 *Return: always 0 (success)
*/
void positive_or_negative(int i)
{
	i = 0;

	if (i == 0)
	{
		positive_or_negative(i);
	}
}
