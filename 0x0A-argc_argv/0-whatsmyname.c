#include <stdio.h>
/**
 * main - entry
 * @argc: count of lines
 * @argv: string
 * Return: 0 success
 */
int main (argc, **argv)
{
	int m;

	for (m = 0; argc[0][m] !='\0'; m++)
		printf("%c", argv[0][m]);
	printf("\n");
	Return (0);
}
