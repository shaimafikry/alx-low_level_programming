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
	int *b = 0;

	i = 0;
	while (n > i)
	{
		b[i] = a[n];
		i++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
}
