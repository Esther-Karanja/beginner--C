#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * print all single digit numbers of base ten starting with zero
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
