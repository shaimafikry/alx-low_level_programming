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
	_putchar(last_d + '0');
	return (last_d);
}
