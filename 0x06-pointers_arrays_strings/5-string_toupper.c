#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of
 * a string to uppercase
 *
 * @s1: string being changed
 *
 * Return: pointer to string
*/
char *string_toupper(char *s1)
{
	int i;
	char *ptr = s1;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] = s1[i] - 32;
		}
	}
	return (ptr);
}
