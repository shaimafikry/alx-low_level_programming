#include "main.h"
/**
* print_number - print integer
* @n: integer
* Return: no return
*/
void print_number(int n)
{
	int p;

	if (n < 0)
	{
		p = n * -1;
		_putchar('-');
	}

	p = n / 10;
	if (p != 0)
	{
		print_number(p);
	}
		_putchar((p % 10) + '0');
}
