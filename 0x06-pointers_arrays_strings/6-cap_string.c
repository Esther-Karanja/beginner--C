#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string
 *
 * Return: pointer to new string
*/
char *cap_string(char *s)
{
	int i;
	char *ptr = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		if (s[i] == ' ')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}
	return (ptr);
}
