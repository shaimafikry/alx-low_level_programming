#include <stdio.h>
/**
* main - Entry point
* Return: 0 aways success
*/
int main(viod)
{
	int i;
	int x;
	int prime = 2;

	for (x = 2;x <= i; x++)
	{
		for (k = 1; k <= i; k++)
		{
		if ( x % k != 0)
		{
			if ( k > prime)
				prime = k;
		}
		}
		
	}
	printf("%d", prime);
	printf("\n");
	return (0);
}
