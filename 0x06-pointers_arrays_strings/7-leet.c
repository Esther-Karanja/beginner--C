#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @st: string to encode
 *
 * Return: pointer to new string
*/
char *leet(char *st)
{
	int i = 0;
	char *ptr = st;

	if (st[i] != '\0')
	{
		st[i] = st[i] - 32;
		i++;
	}
	return (ptr);
}
