#include "main.h"

/**
 * swap_int - swap the values of 2 integer
 * @a : a pointer to int
 * @b: pointer to int
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int *temp;

	*temp = *a;
	a* = *b;
	b* = *temp;
}
