#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: destination bytes are copied to
 * @src: source of the bytes copied
 * @n: number of bytes copied
 *
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i] + 1;
	}
	return (ptr);
}
