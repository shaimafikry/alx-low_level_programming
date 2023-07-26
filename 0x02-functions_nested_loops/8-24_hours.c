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

	for (h = '0'; h <= '2'; h++)
	{
		if ( h != '2')
		{
			for (h2 = '0'; h2 <= '9'; h2++)
			{
				for (m = '0'; m <= '5'; m++)
				{
					for (m2 = '0'; m2 <= '9'; m2++)
					{
						_putchar(h);
						_putchar(h2);
						_putchar(':');
						_putchar(m);
						_putchar(m2);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (h2 = '0'; h2 <= '3'; h2++)
			{
				for (m = '0'; m <= '5'; m++)
				{
					for (m2 = '0'; m2 <= '9'; m2++)
					{
						_putchar(h);
						_putchar(h2);
						_putchar(':');
						_putchar(m);
						_putchar(m2);
						_putchar('\n');
				
					}
				}
			}
		}
	}
}
