#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Description: 'takes input and check if it's greater than 5 or less than 6 '
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int remain;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	remain = n % 10;
	if (remain > 5)
	{
		printf("Last digit of %d is %d and is bigger than 5\n", n,remain);
	}
	else if (remain == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n,remain);
	}
	else if ( remain < 6 && remain != 0 )
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,remain);
	}
	return (0);
}

