#include <stdio.h>

/**
 * main - prints 1- 100 and fizz, buzz or fizz buzz for multiples of 3 and 5
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("fizz");

		else if ((i % 5) == 0)
			printf("buzz");

		else if (((i % 3) || (i % 5)) == 0)
			printf("fizz buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
