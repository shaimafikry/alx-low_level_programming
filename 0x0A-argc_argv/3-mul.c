#include <stdio.h>
/**
 * main - entry , prints the mltiple of arg passd to it 
 * @argc: count of lines
 * @argv: string
 * Return: 0 success
 */


int main (argc, **argv)
{
        int i;
        int m;

        if (argc != 3)
	{
		printf("Error\n")
		return (1);
	}
	i =  atoi(argc[1]);
	m = atoi(argc[2]);
	printf("%d", i * m);
	printf("\n");
        Return (0);
}
