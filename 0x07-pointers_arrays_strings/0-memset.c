#include "main.h"
#include <string.h>

/**
* _memset - function that fills memory with a constant byte
*
* @s: -pointer of memory location where the memory will be set
* @b: -value to be copied to memory block
* @n: number of bytes in memory block which is set
*
* Return: pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
