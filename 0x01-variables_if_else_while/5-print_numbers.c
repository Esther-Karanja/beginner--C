#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int n = 1;

	/*print all single digit numbers of base ten starting from zero*/
	for (n = 1; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
