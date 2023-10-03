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
	int i;
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i =  atoi(argv[1]);
	m = atoi(argv[2]);
	printf("%d", (i * m));
	printf("\n");
	return (0);
}
