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
	int i, num, m;
	int arr[5] = {1,2,5,10,25};

	num = atoi(argv[1]);
	if (argc == 1)
	{
	if (argv[1][0] == '-')
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (num % arr[i] == 0)
				printf("%d\n", num / arr[i]);
			else 
			{
				for (m = 0; m < 5; m++)
				{
					if (num % arr[i] ==arr[m])
						printf("%d\n", (num / arr[i]) + 1);
				}
			}
		}
	}
}
else
{
printf("Error\n");
		return (1);
}
return (0);
}
