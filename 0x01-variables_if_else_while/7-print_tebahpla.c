#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * prints lowercase alphabet in reverse
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char ch = 'z';

		for (ch = 'z'; ch >= 'a'; ch--)
		{
			putchar(ch);
		}
		putchar('\n');
		return (0);
}
