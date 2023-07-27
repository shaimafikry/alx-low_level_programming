#include "main.h"
/**
* times_table - prints table f numbers
* Return: no value return
*/

void times_table(void)
{
	int n;
	int x;
	int z;

	for (n = 0; n <= 9; n++)
		{
			for (x = 0; x <= 9; x++)
				{
					z = n * x;
					if (z > 9)
					{
						_putchar((z / 10) + '0');
						_putchar((z % 10) + '0');
					}
					else
					{
						_putchar(z + '0');
					}
					if (x != 9)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					}
					else
					{
						_putchar('\n');
					}
				}
			_putchar('\n');
		}
}
