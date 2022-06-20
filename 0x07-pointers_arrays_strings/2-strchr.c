#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: first occurence of character c in the string
 *
 * Return: pointer to the first occurence of c in s or
 * NULL if character is not found
*/
char *_strchr(char *s, char c)
{
	if (*s != c && *s != '\0')
	{
		s++;
		return (s);
	}
	else
		return (NULL);
}
