#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - print reversed array
 * @a : a pointer to array
 * @n  : array num
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n = n - 1;
	if (n > 0)
	{
		while (n != i)
		{
			temp = a[i];
			a[i] = a[n];
			a[n] = temp;
			n--;
			i++;
		}
		a[i] ='\0';
	}
}
