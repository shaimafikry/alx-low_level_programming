#include "main.h"
/**
* print_times_table - prints table n numbers
* @n : integer input
* Return: no value return
*/
void print_times_table(int n)
{
	int m, x, z;

		if (n >= 0 && n <= 15)
		{
			for (m = 0; m <= n; m++)
			{
				for (x = 0; x <= n; x++)
				{
					z = m * x;
					if (x == 0)
					{
						_putchar(z + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						if (z > 9  && z <= 99)
						{
							_putchar(' ');
							_putchar((z / 10) + '0');
							_putchar((z % 10) + '0');
						}
						else if (z > 99)
						{
							_putchar((z / 100) + '0');
							_putchar((z / 10 % 10) + '0');
							_putchar((z % 10) + '0');
						}
						else
						{
							_putchar(' ');
							_putchar(' ');
							_putchar(z + '0');
						}
					}
				}
				_putchar('\n');
			}
		}
}
