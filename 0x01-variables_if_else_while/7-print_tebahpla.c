#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Description: 'prints lowercase alphapet in reverse'
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar (n);
	}
	putchar ('\n');
	return (0);
}

