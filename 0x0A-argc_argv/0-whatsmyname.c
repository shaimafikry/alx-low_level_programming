#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: number of argument
 * @argv: array
 * Return: 0 always success
 */
int main (int argc, char *argv[])
{
	int i;
	int m;

	for ( i = 0; i < argc; i++)
	{
		for (m = 0; argv[i][m] != '\0'; m++)
			_putchar(argv[i][m]);
	}
	_putchar('\0);
	return (0);
}
