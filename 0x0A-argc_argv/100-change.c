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
	int arr[5] = {25,10,5,2,1};

if (argc < 2 || argc > 2)
{
printf("Error\n");
		return (1);
}
	if (argv[1][0] == '-' || argv[1] == '0')
		printf("0\n");
	else
	{
num = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			if (num % arr[i] == 0)
{
				printf("%d\n", (num / arr[i]));
break;
}
if ( num % arr[i] != 0)
{
				for (m = 0; m < 5; m++)
				{
					if (num % arr[i] == arr[m])
						printf("%d\n", (num / arr[i]) + 1);
				}
			}
		}
	}
return (0);
}
