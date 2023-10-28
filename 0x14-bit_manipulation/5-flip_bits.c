#include "main.h"
/**
 * flip_bits - returns num of bits u ned to flip to get frm one num to anther.
 * @n: num
 * @m: position
 * Return: 1 if worked -1 if not
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, num;

	num = 0;
	if (m == ~n)
	{
		for (i = 0; i < (sizeof(n) * 8); i++)
		{
			if (!((n >> i) & 0))
				num++;
		}
		return (num);
	}
	return (-1);
}
