#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numb;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		numb = va_arg(list, int);
		printf("%d", numb);

		while (separator != NULL)
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
