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
	int mul, i;

	mul = 0;
	if (argc < 1)
	{
		printf("0");
		printf("\n");
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (argv[i] < 48 && argv[i] > 57)
			{
				printf("Error");
				printf("\n");
				return (1);
			}	
		mul += atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (0);
}
