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
	int i;
	int *b;

	i = 0;
	b = malloc(sizeof(int) * n);
	while (n)
	{
		b[i] = a[n];
		i++;
		n--;
	}
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	free(b);
}
