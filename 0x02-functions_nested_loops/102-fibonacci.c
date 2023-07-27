#include <stdio.h>
/**
* main - entry point
* print fibonacci numbers
* Return: 0 Always success
*/

int main(void)
{
	int n;
	int arr[50];
	arr[0] = 1;
	arr[1] = 2;

	for (n = 0; n < 50; n++)
	{
		if (n >= 2)
		{
			arr[n] = arr[n-1] + arr[n-2];
			printf("%d, ", arr[n]);
		}
		else
		{
			printf("%d, ", arr[n]);
		}
	}
	return (0);
}
