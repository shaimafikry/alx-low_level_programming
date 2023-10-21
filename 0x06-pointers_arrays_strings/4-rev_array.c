
#include "main.h"

/**
 * reverse_array - print reversed array
 * @a : a pointer to array
 * @n  : array num
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i;
	int r[n];

	i = 0;
	while (n > i)
	{
		r[i] = a[n];
		i++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = r[i];
		i++;
	}
	return (a);
}
