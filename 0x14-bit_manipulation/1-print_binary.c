#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: num
 * Return: no return
*/
void print_binary(unsigned long int n)
{
	int num, len, i ;
	
	num = sizeof(n) * 8;
	i = 0;
	len = 0;
	while (i < num)
	{
		if ((n >> i) != 0)
			len = i;
		i++;

	}
	i = len;
	while ( i >= 0)
	{
		if ((n >> i) & 1)
			putchar('1');
		else
			putchar('0');
		i--;
	}
}
