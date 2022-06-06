#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 *
 * print the alphabet in lowercase then in uppercase followed by a new line
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char ch;

	/*print alphabet in lowercase*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	/*print alphabet in uppercase*/
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

