#include "main.h"
#include <string.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @src: source
 * @dest: destination:
 *
 * Return: destination
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (0);
}