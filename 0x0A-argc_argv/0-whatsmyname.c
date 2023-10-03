#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: count of lines
 * @argv: string
 * Return: 0 success
 */
int main (int  __attribute__((__unused__)) argc, char **argv)
{
	int m;

	for (m = 0; argv[0][m] !='\0'; m++)
		printf("%c", argv[0][m]);
	printf("\n");
	return (0);
}
