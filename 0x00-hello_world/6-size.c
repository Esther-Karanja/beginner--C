#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char char1;
	int int1;
	long int longint1;
	long long int longlongint1;
	float float1;

	printf("size of a char: %zu byte(s)\n", sizeof(char1));
	printf("size of an int: %zu byte(s)\n", sizeof(int1));
	printf("size of a long int: %zu byte(s)\n", sizeof(longint1));
	printf("size of a long long int: %zu byte(s)\n", sizeof(longlongint1));
	printf("size of a float: %zu byte(s)\n", sizeof(float1));
	return (0);
}
