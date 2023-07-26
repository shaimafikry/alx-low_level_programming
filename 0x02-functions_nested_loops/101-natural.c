#include <stdio.h>
/*
* main - entry point
* sum of multiples of 3 & 5  below 1024
* Return: 0 Always success
*/

int main(void)
{
	int i, x = 0;

	for (i = 0; i < 1024; i++)
	{
			if (i % 3 == 0 || i % 5 == 0)
			{
				x = x + i;
			}
	}
	printf("%d\n", x);

	return (0);
}
