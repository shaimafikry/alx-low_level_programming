#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: char
 * Return: the converted num or 0 iif fail
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num = 0;
	if (b == NULL)
		return (0);
	while (*b != 0)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b - '0');
		b++;
	}
	return (num);
}
