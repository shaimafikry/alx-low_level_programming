#include "main.h"
/**
* times_table - prints table f numbers
* Return: no value return
*/

void times_table(void)
{
	int n, x, y;

	for (n = 0; n <= 9; n++)
		{
			for (x = 0; x <= 9; x++)
				{
					z = n * x;
					if (x == 9)
					{
						if (z > 9)
						{
							_putchar((z / 10) + '0');
							_putchar((z % 10) + '0');
							_putchar(',');	
							_putchar('\n');
						}
						else
						{
						_putchar(z + '0');
						_putchar('\n');
						}
					}
					else
					{
						if (z > 9)
						{
							_putchar((z / 10) + '0');
							_putchar((z % 10) + '0');
							_putchar(',');
							_putchar(' ');					}
						else
						{
							_putchar(z + '0');
							_putchar(',');
							_putchar(' ');
							_putchar(' ');	
						}
					}
				}
		}
}
