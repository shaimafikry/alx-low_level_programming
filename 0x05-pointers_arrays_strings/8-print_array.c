#include "main.h"

/**
 * print_array - prints every other character
 * @a : a pointer to integer 
 * @n :integer
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i != n; i++)
	{
		if (i < n - 1)
		{
		printf("%d",a[i]);
		_putchar(',');
		_putchar(' ');
		}
		else
		{
		print("%d",a[i]);
		}
	}
	_putchar('\n');
}

