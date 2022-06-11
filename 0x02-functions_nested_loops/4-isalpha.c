#include "main.h"

/**
 * _isalpha - checks for aplhabetic character
 * @c: input
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
