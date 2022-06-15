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
	int i = 0;

	for (i = 0; i <= n && i != '0'; i++)
	{
		dest[i + i] = src[i];
		dest[i + i] = '0';
	}
	return (dest);
}
