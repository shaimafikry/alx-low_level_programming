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
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);
	}
	for (n = 'A' ; n <= 'Z' ; n++)
	{
		putchar(n);
	}
	putchar ('\n');
	return (0);
}

