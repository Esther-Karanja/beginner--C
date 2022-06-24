#include "main.h"
#include <stdio.h>

/**
 * main- function that prints the number of arguments passed into it
 * @argc: number of arguments passed
 * @argv: array
 *
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
