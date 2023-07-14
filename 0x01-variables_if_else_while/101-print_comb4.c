#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Description: 'prints two combination numbers'
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int x;
	int y;

	for (n = 48 ; n < 56 ; n++)
	{
	for (x = n + 1 ; x < 57 ; x++)
	{
	for (y = x + 1 ; y <= 57 ; y++)
	{
		if (x != n)
		{
		if (y != x)
		{
		putchar (n);
		putchar (x);
		putchar (y);
		if (n == 55 && x == 56 && y == 57)
		{
			break;
		}
		putchar (',');
		putchar (' ');
		}
		}
	}
	}
	}
	putchar ('\n');
	return (0);
}
