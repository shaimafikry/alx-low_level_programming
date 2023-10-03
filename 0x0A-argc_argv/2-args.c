#include <stdio.h>
/**
 * main - entry , prints all arg followed by a new line
 * @argc: count of lines
 * @argv: string
 * Return: 0 success
 */


int main (argc, **argv)
{
        int i;
        int m = 0;

        for (i = 0; i < argc; i++)
                for (m = 0; argv[i][m] != '\0'; m++)
                        printf("%c", argv[i][m]);
		printf("\n");
        return (0);
}
