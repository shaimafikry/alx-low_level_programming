#include "main.h"
/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: num
 * @index: position
 * Return: num in position
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;

	num = sizeof(n) * 8;
	if (index > num)
		return (-1);
	if (n >> index & 1)
		return (1);
	else
		return (0);
}
