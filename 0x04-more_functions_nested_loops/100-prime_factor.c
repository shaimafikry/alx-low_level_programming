#include <stdio.h>
/**
* main - Entry point
* Return: 0 aways success
*/
int main(viod)
{
	long int n, f;

	n = 612852475143;
	for (fp = 2; f <= n; fp++)
	{
		if (n % f == 0)
		{
			n /= fp;
			f--;
		}
	}
	printf("%ld\n", f);
	return (0);
}
