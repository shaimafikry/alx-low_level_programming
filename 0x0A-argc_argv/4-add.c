#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry , prints the mltiple of arg passd to it
 * @argc: count of lines
 * @argv: string
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i, m, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (m = 0; argv[i][m] != '\0'; m++)
		{
			if (argv[i][m] < 48 || argv[i][m] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
