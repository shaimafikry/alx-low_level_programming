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

	for (n = 48 ; n < 57 ; n++)
	{
	for (x = n + 1 ; x <= 57 ; x++)
	{
		if (x != n)
		{
		putchar (n);
		putchar (x);
		if (n == 56 && x == 57)
		{
			break;
		}
		putchar (',');
		putchar (' ');
		}
	}
	}
	putchar ('\n');
	return (0);
}

