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
	int i, m;
	int *b;

	i = 0;
	if ( n < 0)
		n = -n;
	m = n;
	b = malloc(sizeof(int) * n);
	while (m)
	{
		b[i] = a[m];
		i++;
		m--;
	}
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	free(b);
}
