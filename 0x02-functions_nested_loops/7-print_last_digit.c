#include "main.h"
/**
 * print_last_digit - checks numbers and gives abslute value
 * @n : integer
 * Return: vale of last digit
 */
int print_last_digit (int num)
{
	if (num == 0)
	{
		return (0);
	}
	else if ( num < 0 )
	{
		return (- (num % 10));
	}
	else 
	{
		return (num % 10); 
	}
}
