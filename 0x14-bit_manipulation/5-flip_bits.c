#include "main.h"
/**
 * flip_bits - returns num of bits u ned to flip to get frm one num to anther.
 * @n: num
 * @m: position
 * Return: 1 if worked -1 if not
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num, count;

	num = n ^ m;
	count = 0;
	while (num != 0)
	{
		  count += num & 1;
		  num >>= 1;
	}
	return (count);
}
