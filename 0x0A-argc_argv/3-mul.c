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
	int i;
	int arr[2];

	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
	for ( i = 0; i < argc; i++)
	{
		arr[i] = argv[i] - '0';
	}
		mul = arr[0] * arr[1];
		printf("%d\n", mul);
	}
	return (0);
}
