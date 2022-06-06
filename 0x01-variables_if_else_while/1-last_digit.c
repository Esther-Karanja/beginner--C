#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is " " and is greater than 5\n", n);
	if (n % 10 == 0)
		printf("Last digit of %d is " " and is 0\n", n);
	if ((n % 10 < 6) != 0)
		printf("Last digit of %d is " " and is less than 6 and not 0\n", n);
	return (0);

}
