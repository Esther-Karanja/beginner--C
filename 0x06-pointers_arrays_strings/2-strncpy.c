#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the destination string is copied to
 * @src: pointer to the source sting is copied from
 * @n: the first character copied from src to dest
 *
 * Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	if ((dest == NULL) && (src == NULL))
	{
		return (NULL);
	}
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
