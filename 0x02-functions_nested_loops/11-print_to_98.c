#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural num up to 98
 * @n : integer
 * Return: no return func
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for  (n ; n <= 98 ; n++ )
		{
			printf("%d, ",n);
		}
	}
	if (n >= 98)
	{
		for  (n ; n >= 98 ; n-- )
		{
			printf("%d, ",n);
		}
	}
	_putchar('\n');

}
