#include "main.h"
/**
 * print_sign - checks numbers and print sign
 * @n : integer
 * Return:
 * 1 if n is >0
 * -1 if n is < 0
 * 0 if n is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
