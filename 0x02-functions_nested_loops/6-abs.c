#include "main.h"
/**
 * _abs - checks numbers and gives abslute value
 * @n : integer
 * Return: absluate value of a number
 */
int _abs(int n)
{	
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1*n);
	}
	else
	{
		return (0);
	}
}
