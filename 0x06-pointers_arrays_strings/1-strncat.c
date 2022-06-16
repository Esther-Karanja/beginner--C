#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source of string
 * @n: index of string to concatenate from src
 *
 * Return: pointer to the resulting string in dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	if ((*src <= n) && (*src != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
