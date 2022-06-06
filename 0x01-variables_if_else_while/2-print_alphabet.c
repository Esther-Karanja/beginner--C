#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
*
* Return: always 0 (success)
*/
int main(void)
{
	char ch;
	ch = 'a';

		/*prints the alphabet in lowercase followed by  new line*/

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		return (0);
}
