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
	int i, num, m, count, chan;
	int arr[5] = {25,10,5,2,1};

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-' || argv[1][0] == '0')
	{
		printf("0\n");
		return (0);
	}
	if (argc < 2 || argc > 2)
    {
        printf("Error\n");
        return (1);
    }
    if (argv[1][0] == '-' || argv[1][0] == '0')
    {
        printf("0\n");
        return (0);
    }
    m = 0, count = 1;
    num = atoi(argv[1]);
    for (i = 0; i < 5; i++)
    {
        chan = arr[i];
        while ( m < 5)
        {
            chan += arr[m] ;
            count++;
            if (chan == num)
            {
                printf("%d\n", count);
                return (0);
            }
            if (chan > num)
            {
                chan -= arr[m];
                count--;
            }
            else
              m--;
            m++;
        }
    }
    printf("%d\n", count);
    return (0);
}
