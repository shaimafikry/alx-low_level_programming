#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Description: 'prints lowercase alphapet'
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);
	}
	putchar('\n')
	return (0);
}

