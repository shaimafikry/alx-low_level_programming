#include "main.h"
/**
 * print_last_digit - checks numbers and gives abslute value
 * @num : integer
 * Return: vale of last digit
 */
int print_last_digit(int num)
{
	int last_d;

	last_d = num % 10;
	if (num > 0)
	{
	_putchar('0' + last_d);
	return (last_d);
	}
	if (num < 0)
	{
		_putchar('0' - last_d * -1);
		return (last_d);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
