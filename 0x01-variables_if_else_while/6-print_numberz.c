#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Description: 'prints lowercase alphapet THEN UPPER CASE'
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
	}
	putchar ('\n');
	return (0);
}

