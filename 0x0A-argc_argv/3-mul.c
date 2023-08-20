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
	int mul;
	int a1, a2;

	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
		a1 = (argv[0] - 48)
		a2 = (argv[1] - 48);
		mul = a1 * a2;
		printf("%d\n", mul);
	}
	return (0);
}
