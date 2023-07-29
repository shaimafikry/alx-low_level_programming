#include "main.h"
/**
* print_triangle - print triangle
* @size: integer
* Return: no return
*/
void print_triangle(int size)
{
	int n, y, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n <= size; n++)
		{
			for (y = size - 1; y > m; y--)
			{
				_putchar(' ');
			}
			for (m = 0; m < n; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
