#include "main.h"
#include <string.h>

/**
 * _strcat - function that appends src string to dest sting
 * @src: source string
 * @dest: destination string
 *
 * Return: pointer to resulting dest string
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[j] = src[j];
	}
	src[i] = '\0';
	return (dest);
}
