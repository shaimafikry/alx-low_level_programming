#include "main.h"
/**
  * _pow_recursion - calculate value of x raised to the power of y
  * @x: integer
  * @y: integer
  * Return: result
  */
int _pow_recursion(int x, int y)
{
	if (n < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	return (x * _pow_recursion(x , y - 1));
}
