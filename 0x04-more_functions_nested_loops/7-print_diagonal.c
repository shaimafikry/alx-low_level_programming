#include "main.h"
/**
* print_diagonal - print diagonal
* @n: integer
* Return: no return
*/
void print_diagonal(int n)
{
	int x;
	int y = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			while (y <= x)
			{
				_putchar(' ');
				y++;
			}
			y = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
