#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 1 at a given index.
 * @n: num
 * @index: position
 * Return: 1 if worked -1 if not
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num, m;

	m = *n;
	num = sizeof(n) * 8;
	if (index > num || n == NULL)
		return (-1);
	m = m >> index & 0;
	*n = m << index;
		return (1);
}
