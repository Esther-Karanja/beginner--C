#include "main.h"
#include <string.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @src: source
 * @dest: destination:
 *
 * Return: pointer to destination
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
