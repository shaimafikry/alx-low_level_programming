#include "main.h"
/**
  * _sqrt_recursion - calculate value of squared n
  * @n: integer
  * Return: result
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	if (n < 0 || n % 2 != 0)
		return (-1);
	return (n / _sqrt_recursion(n / 2));
}
