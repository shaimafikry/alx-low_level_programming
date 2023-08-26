#include "main.h"
/**
* print_number - print integer
* @n: integer
* Return: no return
*/
void print_number(int n)
{
	unsigned int m, y, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	y = m;
	count = 1;

	while (y > 9)
	{
		y /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
