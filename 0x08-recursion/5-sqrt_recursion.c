#include "main.h"
/**
* _sqrt_recursion -  returns the natural square root of a number.
* @n: integer
* Return: the natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n / 2 != 0)
		return (-1);
	if (n == 1)
		return (1);
	return (16 /_sqrt_recursion(n / 2);
}
