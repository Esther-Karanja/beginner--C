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
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*src = '\0';
	return (ptr);

}
