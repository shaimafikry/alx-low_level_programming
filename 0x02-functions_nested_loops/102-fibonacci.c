#include <stdio.h>
/**
* main - entry point
* print fibonacci numbers
* Return: 0 Always success
*/

int main(void)
{
	int n;
	int i = 1;
	int m = 2;
	int d = 0;

	printf("%d, %d, ", i, m);

		for (n = 0; n < 48; n++)
		{
			d = m + i;
			i = m;
			m = d;
			printf("%u", d);
			if (n != 47)
				printf(", ");
			else
				printf("\n");
		}
		return (0);
}
