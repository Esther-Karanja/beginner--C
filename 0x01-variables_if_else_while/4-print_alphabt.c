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

		/*print lowercase letters except q and e*/
		for (ch = 'a'; ch <= 'z' != 'q' && 'e'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		return (0);
}
