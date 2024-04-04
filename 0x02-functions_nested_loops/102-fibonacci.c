#include <stdio.h>
/**
* main - entry point
* print fibonacci numbers
* Return: 0 Always success
*/

int main(void)
{
	int n;
	long i = 1;
	long m = 2;
	long d = 0;

	printf("%li, %li, ", i, m);

		for (n = 0; n < 48; n++)
		{
			d = m + i;
			i = m;
			m = d;
			printf("%li", d);
			if (n != 47)
				printf(", ");
			else
				printf("\n");
		}
		return (0);
}
