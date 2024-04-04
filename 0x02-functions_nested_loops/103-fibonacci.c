#include <stdio.h>
/**
* main - entry point
* print fibonacci numbers
* Return: 0 Always success
*/

int main(void)
{
	long n = 0;
	long i = 1;
	long m = 2;
	long d = 0;

		while (d <= 4000000)
		{
			d = m + i;
			i = m;
			m = d;
			if (d % 2 == 0)
				n+= d;
		}
		printf("%li\n", n);
		return (0);
}
