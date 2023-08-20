#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: number of argument
 * @argv: array
 * Return: 0 always success
 */
int main(int argc, char **argv)
{
	int mul;
	int i;

	mul = 1;
	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	return (0);
}
