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
	int mul;

	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
		mul = argv[0] * argv[1];
		printf("%d\n", mul);
	}
	return (0);
}
