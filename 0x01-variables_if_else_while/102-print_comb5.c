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
	
	for (n = 0 ; n <= 98 ; n++)
	{
	for (x = n + 1 ; x <= 99 ; x++)
	{
		{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		putchar(' ');
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (n == 98 && x == 99)
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
