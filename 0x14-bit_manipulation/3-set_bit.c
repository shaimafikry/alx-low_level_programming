#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: num
 * @index: position
 * Return: 1 if worked -1 if not
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	num = sizeof(unsigned long int) * 8;
	if (index > num || n == NULL)
		return (-1);
	*n |= 1UL << index;
		return (1);
}
