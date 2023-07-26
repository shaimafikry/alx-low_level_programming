#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * no input
 * Return: no return value
 */
void jack_bauer(void)
{
	char h;
	char h2;
	char m;
	char m2;

	for (h = '0'; h <= '23'; h++)
	{
		for (m = '0'; m <= '5'; m++)
		{
			for (m2 = '0'; m2 <= '9'; m2++)
			{
				if (h < 10)
				{
					_putchar('0');
					_putchar(h);
					_putchar(':');
					_putchar(m);
					_putchar(m2);
					_putchar('\n');
				}
				else
				{
					_putchar(h);
					_putchar(':');
					_putchar(m);
					_putchar(m2);
					_putchar('\n');
				}
			}
		}
	}
}
