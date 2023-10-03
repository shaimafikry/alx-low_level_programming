#include <stdio.h>
#include <string.h>
/**
 * main - entry , prints all arg followed by a new line
 * @argc: count of lines
 * @argv: string
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
