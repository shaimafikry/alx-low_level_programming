#include "main.h"
/**
* print_number - print integer
* @n: integer
* Return: no return
*/
void print_number(int n)
{
	if (n >= 0)
	{
		if (n > 999)
		{
			_putchar((n / 1000) + '0');
			_putchar((n / 100 % 10) + '0');
			_putchar((n / 10 % 10) + '0');
		}
		else if (n > 99)
		{
			_putchar((n / 100) + '0');
			_putchar((n / 10 % 10) + '0');
		}
		else if (n > 9)
		{
			_putchar((n / 10) + '0');
		}
		_putchar((n % 10) + '0');
	}
	else
	{
		n = n * -1;
		_putchar('-');
		if (n > 999)
		{
			_putchar((n / 1000) + '0');
			_putchar((n / 100 % 10) + '0');
			_putchar((n / 10 % 10) + '0');
		}
		else if (n > 99)
		{
			_putchar((n / 100) + '0');
			_putchar((n / 10 % 10) + '0');
		}
		else if (n > 9)
		{
			_putchar((n / 10) + '0');
		}
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
