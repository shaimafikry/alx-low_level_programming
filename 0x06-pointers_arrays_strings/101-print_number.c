#include "main.h"

/**
 * print_number - print number as string
 * @n : a num
 * Return: no return
 */

void print_number(int n)
{
	int x = 0, base = 1;
	int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	num = n;
	/*know the number base*/
	while (n)
	{
		n = n / 10;
		base *= 10;
	}
	while (base > 1)
	{
		base = base / 10;
		x = num / base;
		_putchar(x + '0');
		num = num % base;
	}
}
