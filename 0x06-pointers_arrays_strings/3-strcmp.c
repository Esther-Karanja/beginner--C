#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compares two strings
 * @s1: First string
 * @s2: second string
 *
 * Return: 0 (if same), -1 (if < 0) or 1 (if > 0).
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
	}
	return (0);
}
