#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -function that concatenates two strings
 * @s1: destination of string
 * @s2: source string
 * @n: bytes of s2 to append to s1
 *
 * Return: pointer to new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int j;
	unsigned int count;
	unsigned int count1;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
		j += i;
		ptr = malloc(sizeof(char) * (i + j + 1));
	}
	else
		ptr = malloc(sizeof(char) * (i + n + 1));

	if (ptr == NULL)
		return (NULL);
	for (count = 0; count < i; count++)
	{
		ptr[count] = s1[count];
	}
	for (count1 = 0; count1 < n; count1++)
	{
		ptr[count++] = s2[count1];
	}
	ptr[count++] = '\0';
	return (ptr);
}
