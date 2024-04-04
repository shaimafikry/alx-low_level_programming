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

		for (n = 1; n < 50; n++)
		{
			d = m + i;
			i = m;
			m = d;
			printf("%u", d);
			if (n != 49)
				printf(", ");
			else
				printf("\n");
		}
		return (0);
}
