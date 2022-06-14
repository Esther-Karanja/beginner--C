#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string character input
 *
 * Return:string thet is reversed
*/
void rev_string(char *s)
{
	int i;
	char temp;
	char name[10] = "My School";
	int n = *(s + 1);

	for (i = 0; i < (n / 2); i++)
	{
		temp = name[i];
		name[i] = name[n - 1 - i];
		name[n - 1 - i] = temp;
	}
}
