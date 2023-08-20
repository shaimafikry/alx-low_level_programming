#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: number of argument
 * @argv: array
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i;
	int m;

	for (i = 0; i < argc; i++)
	{
		while (argv[i][m] != '\0')
		{
			_putchar(argv[i][m]);
			m++;
		}
	}
	_putchar('\0');
	return (0);
}
