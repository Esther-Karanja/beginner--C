#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *strn;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		strn = va_arg(list, char*);
		if (strn == NULL)
			printf("(nil)");
		else
			printf("%s", strn);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
