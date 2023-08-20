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
	int mul;
	int n1,n2;

	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
		n1 = argv[0] - '0';
		n2 = argv[1] - '0';
		mul = n1 * n2;
		printf("%d\n", mul);
	}
	return (0);
}
