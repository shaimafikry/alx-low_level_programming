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
	int mul, i, m;

	mul = 0;
	if (argc < 1)
	{
		printf("0");
		printf("\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (m = 0; argv[i][m] != '\0'; m++)
			{
				if (atoi(argv[i][m]) < '0' && atoi(argv[i][m]) > '9')
				{
					printf("Error");
					printf("\n");
					return (1);
				}
			}
		mul += atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (0);
}
