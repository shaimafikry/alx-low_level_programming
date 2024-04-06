#include "main.h"

/**
 * print_number - print number as string
 * @n : a num
 * Return: no return
 */

void print_number(int n)
{
	int i = 0, x = 0, base = 1;
	int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	/*know the number base*/
	while (n)
	{
		n = n / 10;
		i++;
	}
	while (i != 0)
	{
		base *= 10;
		i--;
	}
	while (num)
	{
		base = base / 10;
		x = num / base;
		_putchar(x + '0');
		num = num % base;
	}
}
