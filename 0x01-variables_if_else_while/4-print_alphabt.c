#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * print the alphabet in lowercase except for q and e
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			if (ch != 'q' && ch != 'e')
			putchar(ch);
		}
		putchar('\n');
		return (0);
}
