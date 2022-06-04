#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of char: %zu bytes\n", sizeof(a));
	printf("size of int: %zu bytes\n", sizeof(b));
	printf("size of long int: %zu bytes\n", sizeof(c));
	printf("size of long long int: %zu bytes\n", sizeof(d));
	printf("size of float: %zu bytes\n", sizeof(e));
	Return(0);
}
