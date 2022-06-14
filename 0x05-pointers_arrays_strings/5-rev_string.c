#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string character input
 *
 * Return:string thet is reversed
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char str[10] = "My School";

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
