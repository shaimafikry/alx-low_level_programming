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
	int z;

	for (n = 48 ; n <= 57 ; n++)
	{
	for (x = 48 ; x <= 57 ; x++)
	{
	for (y = 48 ; y <= 57 ; y++)
	{
	for (z = 48 ; z <= 57 ; z++)
	{
		putchar (n);
		putchar (x);
		putchar (' ');
		putchar (y);
		putchar (z);
		if (n == 57 && x == 56 && y == 57 && z == 57)
		{
			break;
		}
		putchar (',');
		putchar (' ');
	}
	}
	}
	}
	putchar ('\n');
	return (0);
}
