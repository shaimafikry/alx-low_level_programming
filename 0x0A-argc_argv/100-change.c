#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prnts minm numb of coins to make change for amount of money.
 * @argc: count of lines
 * @argv: string
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i, chang, num, sum;
	int cent[] =  {25, 10, 5, 2};

	sum = 0;
	chang = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
		printf("0\n");
	if (num == sum)
	{
		printf("1");
		return (0);
	}
	for (i = 0; i < 4; i++)
	{
		if (chang < num)
		{
			chang += cent[i];
			sum++;
		}
		if (chang > num)
		{
			chang = chang - cent[i];
			sum--;
		}
	}
	printf("%d\n", sum);
	return (0);
}
