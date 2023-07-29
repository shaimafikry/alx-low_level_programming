#include "main.h"
/**
* more_numbers - print 0-14 numbers 0 times
* Return: no return
*/
void more_numbers(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		if (x != 9)
		{
		_putchar('\n');
		}
	}
}
